//Napisati funkciju koja vraæa najduži zajednièki podstring u dva stringa.

#include <iostream>
#include <vector>
#include <algorithm>
using std::vector;
using namespace std;

string longest(string s1, string s2)
{
	string tmp;
	string substr;
	int tmp_size = 0;
	for (int i = 0; i != s1.length(); i++)
	{
		tmp.push_back(s1[i]);
		for (int j = i + 1; i <= s1.length(); j++)
		{
			if (s2.find(tmp) != string::npos)
			{
				int x = tmp.size();
				if (x > tmp_size)
				{
					tmp_size = x;
					substr = tmp;
				}
				tmp.push_back(s1[j]);
			}
			else
			{
				tmp.clear();
				break;
			}
		}
	} 
	return substr;
}

int main()
{
	string s1("statistika je znanost o podacima");
	string s2("ja o podacima i znanosti znam malo");
	string substr= longest(s1, s2);
	cout << substr;
	
}