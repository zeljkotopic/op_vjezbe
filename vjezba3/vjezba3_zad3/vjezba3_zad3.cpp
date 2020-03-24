/*Napisati funkciju koja iz stringa izbaci svako pojavljivanje podstringa
koristeæi funkcije standardne biblioteke.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void fun(string& str, string podstr)
{
	size_t k = str.find(podstr);
	while (k != string::npos)
	{
		str.erase(k, podstr.size());
		k = str.find(podstr);
	}
}
int main()
{
	string str("Ne izlazim iz kuce zbog zla i karantene ");
	string podstr("zla");
	cout << str << endl;
	fun(str, podstr);
	
	cout << str;
	return 0;
}