//Napisati funkciju koja vraæa niz int vrijednosti velièine n u kojem je svaki
//element zbroj svoja dva prethodnika.Prvi i drugi element u nizu su jedinice.
//U main funkciji ispisati dobiveni niz i osloboditi memoriju.

#include <iostream>
using namespace std;
int* fun(int *arr,int n)
{
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < n; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}


int main()
{
	int n;
	cout << "unesi velicnu:" << endl;
	cin >> n;
	int* arr = new int[n];
	
	int* res = fun(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << res[i] << " ";
	}
	
	
	delete[] arr;
	
}

