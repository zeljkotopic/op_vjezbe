// Napisati funkciju koja æe sumirati prvi i zadnji element vektora, drugi i
//predzadnji, treæi i predpredzadnji itd.Izraèunate sume spremiti u novi
//vektor te izraèunati najveæu i najmanju meðu sumama.

#include <iostream>
#include <vector>
using namespace  std;

vector<int> suma(vector<int>v)
{
	int* novi = new int[v.size() / 2];
	int t = 0;
	for (int i = 0, j = v.size() - 1; i < j; i++, j--)
	{
		novi[t] = v[i] + v[j];
		t++;
	}

	vector<int> v_new(novi, novi + t);
	return v_new;
}

void min_max_fun(vector<int> rezultat, int& min, int& max)
{
	for (int i = 1; i < rezultat.size(); i++)
	{
		if (rezultat[i] > max)
			max = rezultat[i];
	}
	for (int i = 1; i < rezultat.size(); i++)
	{
		if (rezultat[i] < min)
			min = rezultat[i];
	}
		 
}

int main()
{
	int arr[] = { 2,4,6,8,3,10 };
	vector<int>v(arr, arr + (sizeof(arr) / sizeof(int)));
	vector<int>rezultat(suma(v));
	int min = rezultat[0];
	int max = rezultat[0];
	for (int i = 0; i < rezultat.size(); i++)
	{
		cout << rezultat[i] << " ";
	}
	cout << endl;
	min_max_fun(rezultat, min, max);
	cout << "Najveci je:" << max << endl;
	cout << "Najmanji je:" << min << endl;
}

