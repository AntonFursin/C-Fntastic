#include <iostream>
#include <string>
#include <set>

int main() {
	std::string NewS;
	std::string S;
	std::set <char> Hold;
	std::set <char> Compare;

	std::cin >> S;

	for (int i = 0; i < S.size(); i++)
	{
		if (Hold.find(S[i]) != Hold.end())
		{
			Compare.insert(S[i]);
		}
		else
			Hold.insert(S[i]);

	}


	for (int i = 0; i < S.size(); i++)
	{
		if ((Hold.find(S[i]) != Hold.end()) && (Compare.find(S[i]) != Compare.end()))
		{
			NewS = NewS + ")";
		}
		else
			NewS = NewS + "(";
	}

	std::cout << NewS;
}