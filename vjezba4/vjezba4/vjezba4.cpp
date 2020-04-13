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

	if (broj_igraca == 2){
		igrac player1, player2;
		cout << "Ime igraca 1:" << endl;
		cin >> player1.ime;
		cout << "Ime igraca 2:" << endl;
		cin >> player2.ime;
		cout << player1.ime << endl;
		player1.print(player1.kombinacija1);
		if (player1.troje(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		else if (player1.troje(player1.kombinacija1) == 4)
			player1.bodovi += 4;

		if (player1.napola_bastona(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_spadi(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_kupa(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_dinara(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		cout << player1.ime << "-" << player1.bodovi << "bodova";
		cout << endl; cout << endl;
		cout << player2.ime << endl;
		player2.print(player2.kombinacija1);
		if (player2.troje(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		else if (player2.troje(player2.kombinacija1) == 4)
			player2.bodovi += 4;

		if (player2.napola_bastona(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_spadi(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_kupa(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_dinara(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		cout << player2.ime << "-" << player2.bodovi << "bodova";
	}
	else if (broj_igraca == 4)
	{
		igrac player1, player2,player3,player4;
		cout << "Ime igraca 1:" << endl;
		cin >> player1.ime;
		cout << "Ime igraca 2:" << endl;
		cin >> player2.ime;
		cout << "Ime igraca 3:" << endl;
		cin >> player3.ime;
		cout << "Ime igraca 4:" << endl;
		cin >> player4.ime;
		cout << player1.ime << endl;
		player1.print(player1.kombinacija1);
		if (player1.troje(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		else if (player1.troje(player1.kombinacija1) == 4)
			player1.bodovi += 4;

		if (player1.napola_bastona(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_spadi(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_kupa(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		if (player1.napola_dinara(player1.kombinacija1) == 3)
			player1.bodovi += 3;
		cout << player1.ime << "-" << player1.bodovi << "bodova";
		cout << endl; cout << endl;
		cout << player2.ime << endl;
		player2.print(player2.kombinacija1);
		if (player2.troje(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		else if (player2.troje(player2.kombinacija1) == 4)
			player2.bodovi += 4;

		if (player2.napola_bastona(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_spadi(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_kupa(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		if (player2.napola_dinara(player2.kombinacija1) == 3)
			player2.bodovi += 3;
		cout << player2.ime << "-" << player2.bodovi << "bodova";
		cout << endl << endl;
		cout << player3.ime << endl;
		player3.print(player3.kombinacija1);
		if (player3.troje(player3.kombinacija1) == 3)
			player3.bodovi += 3;
		else if (player3.troje(player3.kombinacija1) == 4)
			player3.bodovi += 4;

		if (player3.napola_bastona(player3.kombinacija1) == 3)
			player3.bodovi += 3;
		if (player3.napola_spadi(player3.kombinacija1) == 3)
			player3.bodovi += 3;
		if (player3.napola_kupa(player3.kombinacija1) == 3)
			player3.bodovi += 3;
		if (player3.napola_dinara(player3.kombinacija1) == 3)
			player3.bodovi += 3;
		cout << player3.ime << "-" << player3.bodovi << "bodova";
		cout << endl; cout << endl;
		cout << player4.ime << endl;
		player4.print(player4.kombinacija1);
		if (player4.troje(player4.kombinacija1) == 3)
			player4.bodovi += 3;
		else if (player4.troje(player4.kombinacija1) == 4)
			player4.bodovi += 4;

		if (player4.napola_bastona(player4.kombinacija1) == 3)
			player4.bodovi += 3;
		if (player4.napola_spadi(player4.kombinacija1) == 3)
			player4.bodovi += 3;
		if (player4.napola_kupa(player4.kombinacija1) == 3)
			player4.bodovi += 3;
		if (player4.napola_dinara(player4.kombinacija1) == 3)
			player4.bodovi += 3;
		cout << player4.ime << "-" << player4.bodovi << "bodova";
	}
	else{
		cout << "Nepravilan unos,unesi dva ili cetri igraca!";
	}
}

