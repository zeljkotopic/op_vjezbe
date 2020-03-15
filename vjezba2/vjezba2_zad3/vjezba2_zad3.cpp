//  Napisati funkciju koja vraæa referencu na neki element niza. 
//Koristeæi povratnu vrijednost funkcije kao lvalue uveæajte i-ti element niza za jedan.

#include <iostream>
using namespace std;
int& fun(int arr[], int pozicija)
{
	return arr[pozicija];
}


int main()
{
	int arr[4] = { 5,3,9,2 };
	int pozicija;

	cout << "unesi poziciju:" << endl;
	cin >> pozicija;
	cout << (fun(arr, pozicija) += 1) << endl;

}

