#include <iostream>
#include <vector>
using namespace std;
template<typename T> void sort(vector<T>& v)
{
	const size_t n = v.size(); 
	for (int gap = n / 2; 0 < gap; gap /= 2) 
		for (int i = gap; i < n; ++i)  
			for (int j = i - gap; 0 <= j; j -= gap) 
			{
				if (isalpha(v[j]))
				{
					int prvi = tolower(v[j]); // B
					int drugi = tolower(v[j + gap]); //a
					if (drugi < prvi)
					{
						swap(v[j], v[j + gap]);
					}
				}
				else
				{
					if (v[j + gap] < v[j])
					{
						swap(v[j], v[j + gap]);
					}
				}
			}
}
int main()
{
	vector<char>v;
	v.push_back('c');
	v.push_back('F');
	v.push_back('A');
	v.push_back('a');
	v.push_back('B');
	v.push_back('f');
	sort(v);
	for (int i = 0; i < v.size(); ++i)
		cout << v[i];
}

