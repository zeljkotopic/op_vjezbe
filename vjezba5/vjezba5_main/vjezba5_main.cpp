#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
#include "treset.h"

using namespace std;
int main()
{
	srand(time(NULL));
	int broj_igraca;
	cout << "Broj igraca:";
	cin >> broj_igraca;
	if (broj_igraca == 2 || broj_igraca == 4) {
		treset* igra = new treset(broj_igraca);
		igra->zapocniIgru();
	}
	else {
		cout << "Nepravilan unos,unesi dva ili cetri igraca!";
	}
}
