/*Napisati funkciju koja u listu prirodnih brojeva ispred svakog parnog
broja umetne nulu, a iza svakog neparnog broja osim jedinice umetne
jedinicu. Funkcija vraæa broj elemenata izmeðu prve nule u listi i zadnje
jedinice. U main funkciji generirati listu, pozvati funkciju, ispisati listu
i povratnu vrijednost funkcije*/

#include <iostream>
#include <algorithm> 
#include <list>
#include <string>
#include <vector>

using namespace std;

typedef list<int> lista;
typedef lista::const_iterator it;

void fun(list<int>& lista, int& br,int vel)
{
	int broji_jed = 0;
	lista.resize(vel);
	for (it i = lista.begin(); i != lista.end(); i++)
	{
		
		if (*i % 2 == 0 )
		{
			lista.insert(i, 0);
			
		}
		else if (*i % 2 == 1 && *i != 1)
		{
			i++;
			lista.insert(i, 1);
			broji_jed++;
			if (*i % 2 == 0)
			{
				lista.insert(i, 0);
			}
		}

	}


	int drugi_jed_brojac = 0;
	for (it i = lista.begin(); i != lista.end(); i++)
	{
		if (*i == 0)
		{
			for (it j = lista.begin(); j != lista.end(); j++)
			{
				if (*j == 1)
				{
					drugi_jed_brojac++;
					if (drugi_jed_brojac == broji_jed)
					{
						br++;
						break;
					}

				}
				else
				{
					br++;
				}

			}
		}
		break;

	}

}
void print(list<int>lista)
{
	for ( it i = lista.begin(); i != lista.end(); i++)
	{
		cout << *i << " " ;
	}
}

int main()
{
	int niz[] = { 2,8,3,4,5,6,7,12 };
	int vel = sizeof(niz) / sizeof(niz[0]);
	list<int> lista(niz, niz + vel);
	int br = 0;
	fun(lista, br,vel);
	print(lista);
	cout << br  <<endl;
	
}

