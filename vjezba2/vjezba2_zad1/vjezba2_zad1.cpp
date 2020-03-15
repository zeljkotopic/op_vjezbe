//Napisati funkciju koja raèuna najveæi i najmanji broj u nizu od n prirodnih
//brojeva.Funkcija vraæa tražene brojeve pomoæu referenci.

#include <iostream>
using namespace std;

void max_min(int arr[],int& max_number,int& min_number,int len)
{

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max_number)
			max_number = arr[i];
	}
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min_number)
			min_number = arr[i];
	}

}

int main()
{
	int arr[7] = { 2,0,5,7,9,3,1 };
	int max_number=arr[0];
	int min_number=arr[0];
	int len = sizeof(arr) / sizeof(arr[0]);
	max_min(arr,max_number,min_number,len);
	cout << max_number << endl;
	cout << min_number << endl;
}
