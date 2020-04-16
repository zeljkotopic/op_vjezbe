#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "treset.h"
using namespace std;
int treset::troje(vector<karta>kombinacija) {
	int br1 = 0, br2 = 0, br3 = 0;
	for (int i = 0; i < 10; i++) {
		if (kombinacija[i].dohvati_broj() == "1")
			br1++;
		else if (kombinacija[i].dohvati_broj() == "2")
			br2++;
		else if (kombinacija[i].dohvati_broj() == "3")
			br3++;
	}
	if (br1 == 3 || br2 == 3 || br3 == 3)
		return 3;
	else if (br1 == 4 || br2 == 4 || br3 == 4)
		return 4;
	else
		return 0;
}
int treset::napola_dinara(vector<karta>kombinacija) {
	int br = 0;
	for (int i = 0; i < 10; i++) {
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3") {
			if (kombinacija[i].dohvati_zog() == "D")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
int treset::napola_kupa(vector<karta>kombinacija) {
	int br = 0;
	for (int i = 0; i < 10; i++) {
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3") {
			if (kombinacija[i].dohvati_zog() == "K")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
int treset::napola_spadi(vector<karta>kombinacija) {
	int br = 0;
	for (int i = 0; i < 10; i++) {
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3") {
			if (kombinacija[i].dohvati_zog() == "S")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
int treset::napola_bastona(vector<karta>kombinacija) {
	int br = 0;
	for (int i = 0; i < 10; i++) {
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3") {
			if (kombinacija[i].dohvati_zog() == "B")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
treset::treset(int brIgraca) {
	//cout << "treset konst" << endl;
	cout << "----------------TRESET-------------------------------\n";
	this->brojIgraca = brIgraca;
	this->spil = new mac(); 
	this->spil->shuffle();
}
treset::~treset() {
	delete[] & (this->igraci);
	delete[] & (this->spil);
	delete this;
	//cout << "treset dest" << endl;
}
void treset::setBrojIgraca(int n) {
	this->brojIgraca = n;
}
int treset::getBrojIgraca() {
	return this->brojIgraca;
}
void treset::zapocniIgru() {
	string n = "";
	for (int i = 0; i < this->brojIgraca; i++)
	{
		igrac* player = new igrac();
		cout << "\nUnesite ime igraca:" << endl;
		cin >> n;
		player->setIme(n);
		player->setIgraceveKarte(this->spil->podijeli());
		this->igraci.push_back(*player);
	}
	for (int i = 0; i < this->brojIgraca; i++) {
		this->bodovanje(&(this->igraci[i]));
		this->igraci[i].print();

	}
	cout << "\n------------------FIN-------------------------";
}
mac* treset::getMac() {
	return this->spil;
}
void treset::setSpil(mac* s) {
	this->spil = s;
}
vector<igrac> treset::getIgraci() {
	return this->igraci;
}
void treset::setIgraci(vector<igrac> ig) {
	this->igraci = ig;
}
void treset::bodovanje(igrac* player) {
	if (troje(player->getIgraceveKarte()) == 3)
		player->setBodovi(player->getBodovi() + 3);
	else if (troje(player->getIgraceveKarte()) == 4)
		player->setBodovi(player->getBodovi() + 4);

	if (napola_bastona(player->getIgraceveKarte()) == 3)
		player->setBodovi(player->getBodovi() + 3);
	if (napola_spadi(player->getIgraceveKarte()) == 3)
		player->setBodovi(player->getBodovi() + 3);
	if (napola_kupa(player->getIgraceveKarte()) == 3)
		player->setBodovi(player->getBodovi() + 3);
	if (napola_dinara(player->getIgraceveKarte()) == 3)
		player->setBodovi(player->getBodovi() + 3);
}