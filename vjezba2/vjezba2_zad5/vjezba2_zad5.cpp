//Napisati funkciju za unos pozitivnih cijelih brojeva.Korisnik unosi brojeve
//sve dok ne unese nulu.Funkcija inicijalno alocira memoriju za 10 elemenata.
//Svaki put kad velièina niza dosegne alociranu velièinu, alocira se duplo.U
//main funkciji ispisati dobiveni niz i osloboditi memoriju.

#include <iostream>
using namespace std;

int* fun(int n,int& a)
{
	int* arr = new int[n];
	int i = 0;
	int t = 10;
	while (arr[i] != 0)
	{
		cout << "Unesi pozitivni cijeli broj:" << endl;
		cin >> arr[i];
		if (arr[i] < 0)
			cout << "Unijeli ste negativni broj!" << endl;
		else if (arr[i] > 0)
		{
			i++;
			if (i == t)
			{
				int* darr = new int[t +10];
				for (int i = 0; i < n; ++i)
					darr[i] = arr[i];
				delete[] arr;
				arr = darr;
				t += 10;
			}
		}
	}
	n = i;
	a = n;
	return arr;

}

int main()
{
	int n = 10;
	int p = 0;
	int* res = fun(n,p);
	
	for (int i = 0; i < p ; i++)
	{
		cout << res[i] << " ";
	}
	delete[] res;
	res = 0;
	

}

