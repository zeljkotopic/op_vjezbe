/*7. Napisati program u kojem korisnik unosi binarne znamenke (0 i 1) i
sprema ih u container. Unosu je kraj kad korisnik unese vrijednost koja
ne predstavlja binarnu znamenku. Nakon toga napisati funkciju stuffing_bit koja primjeni bit stuffing algoritam na container. Bit stuffing
je tehnika koja se koristi u HDLC protokolima za prijenos podataka u
kojima je poèetak i završetak paketa odreðen sa nizom bitova 01111110.
Da se ne bi sadržaj paketa brkao sa stop-bitovima, potrebno je nakon
svakog niza od pet jedinica umetnuti jednu nulu.
*/
/*8. Napisati funkciju unstuffing_bit koja je inverzna funkciji stuffin_bit
iz predhodnog zadatka. Funkcija prima modificirani container i izbacuje
umetnute nule kako bi se dobila originalna sekvenca.*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
typedef vector<int> v;
typedef v::iterator it;

void unstuffing_bit(vector<int>& v)
{
	int br = 0;
	for (it i = v.begin(); i != v.end(); i++)
	{
		if (*i == 1)
		{
			br++;
			if (br == 5)
			{
				i=v.erase(i+1);
				
			}
		}
		else
		{
			br = 0;
		}
	}
}

void stuffing_bit(vector<int>& v)
{
	int br = 0;
	for ( it i= v.begin(); i != v.end(); i++)
	{
		if (*i == 1)
		{
			br++;
			if (br == 5)
			{
				i++;
				i = v.insert(i, 0);
			}
		}
		else
		{
			br = 0;
		}
	}
	
}

void print(vector<int> v)
{
	for (int i = 0 ; i < v.size() ; i++)
	{
		cout << v[i];
	}
}
int main()
{
	int x = 0;
	cout << "Input 0 or 1" << endl;
	vector<int>v;

	while (1)
	{
		cin >> x;
		if (x == 0 || x == 1)
			v.push_back(x);
		else
			break;
		
	}
	stuffing_bit(v);
	print(v);
	unstuffing_bit(v);
	cout << endl;
	print(v);

}
