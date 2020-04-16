#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "karta.h"
using namespace std;
string zog[] = { "Spade","Dinari","Bate","Kupe" };
string broj[] = { "1","2","3","4","5","6","7","fanta","konj","kralj" };
karta::karta(){
	//cout << "karta konst" << endl;
}
karta::~karta(){
	//cout << "karta dest" << endl;
}
karta::karta(int broj_zoga, int broj_broja) {
	this->mojZog = zog[broj_zoga];
	this->mojBroj = broj[broj_broja];
}
string karta::dohvati_broj() {
	return this->mojBroj;
}
string karta::dohvati_zog() {
	return this->mojZog;
}
void karta::ispisi_kartu() {
	cout << this->dohvati_broj() << this->dohvati_zog() << "  ";
}