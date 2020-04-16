#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "igrac.h"
using namespace std;
void igrac::print() {
	cout << "\nKarte igraca " + this->ime + " su:\n";
	for (int i = 0; i < 10; i++) {
		this->igraceveKarte[i].ispisi_kartu();
	}
	cout << endl;
	cout << "Bodovi : ";
	cout << this->bodovi;
}
igrac::igrac(){
	//cout << "igrac konts" << endl;
	this->bodovi = 0;
}
igrac::~igrac(){
	//cout << "igrac dest" << endl;
}
void igrac::setIme(string i){
	this->ime = i;
}
string igrac::getIme(){
	return this->ime;
}
void igrac::setIgraceveKarte(vector<karta> karte){
	this->igraceveKarte = karte;
}
vector<karta> igrac::getIgraceveKarte(){
	return this->igraceveKarte;
}
void igrac::setBodovi(int b){
	this->bodovi = b;
}
int igrac::getBodovi(){
	return this->bodovi;
}