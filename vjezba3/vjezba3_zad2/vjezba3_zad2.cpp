/*Napisati funkciju koja izmiješa rijeèi u reèenici u inverznom poredku.
Toèka mora ostati na kraju reèenice, prva rijeè mora biti napisana velikim poèetnim slovom,
a zadnja malim. Koristiti reverse funkciju.
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>;
using namespace std;  

void fun(string str, vector<string>& v)
{
	string::reverse_iterator rit = str.rbegin();
	while (*rit != ' ')
	{
		rit++;
	}
	*rit--;
	*rit = toupper(*rit);
	str[0] = tolower(str[0]);
	reverse(str.begin(), str.end() - 1);
	string buffer;
	for (string::iterator it = str.begin(); it < str.end(); it++)
	{
		if (*it == ' ' || *it == '.')
		{
			buffer = buffer + ' ';
			reverse(buffer.begin(), buffer.end());
			v.push_back(buffer);
			buffer.clear();
		}
		else
			buffer = buffer + *it;
	}
	v.push_back(".");
}


void print(vector<string> v)
{
	for (vector<string>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it;
	}
}
int main()
{
	string str("Dosadno je ajme.");
	vector<string> v;
	fun(str, v);
	print(v);
	
}
