#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "treset.h"
using namespace std;
string zog[] = { "Spade","Dinari","Bate","Kupe" };
string broj[] = { "1","2","3","4","5","6","7","fanta","konj","kralj" };
karta::karta()
{}
karta::karta(int broj_zoga, int broj_broja){
	mojzog = zog[broj_zoga];
	mojbroj = broj[broj_broja]; 
} 
string karta::dohvati_broj(){
	return mojbroj;
}
string karta::dohvati_zog(){
	return mojzog;
}
void karta::ispisi_kartu(){
	cout << dohvati_broj() << dohvati_zog() << "  ";
}
mac::mac(){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 10; j++){
			karta* nova = new karta(i, j);
			deck.push_back(*nova);
		}
	}
}
void mac::shuffle(){
	random_shuffle(deck.begin(), deck.end());
}
void mac::print_deck(){
	for (int i = 0; i < 40; i++){
		deck[i].ispisi_kartu();
	}
}
vector<karta>mac::podijeli(){
	vector<karta>novi(10);
	copy(deck.begin(), deck.begin() + 10, novi.begin());
	deck.erase(deck.begin(), deck.begin() + 10);
	return novi;
}
igrac::igrac(){
	mac spil;
	spil.shuffle();
	kombinacija1 = spil.podijeli();
	kombinacija2 = spil.podijeli();
	kombinacija3 = spil.podijeli();
	kombinacija4 = spil.podijeli();
}
void igrac::print(vector<karta>kombinacija){
	for (int i = 0; i < 10; i++){
		kombinacija[i].ispisi_kartu();
	}
	cout << endl;
}
int igrac::troje(vector<karta>kombinacija){
	int br1 = 0, br2 = 0, br3 = 0;
	for (int i = 0; i < 10; i++){
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
int igrac::napola_dinara(vector<karta>kombinacija){
	int br = 0;
	for (int i = 0; i < 10; i++){
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3"){
			if (kombinacija[i].dohvati_zog() == "D")
				br++;
		}
	}
	return (br==3) ? 3 : 0;
}
int igrac::napola_kupa(vector<karta>kombinacija){
	int br = 0;
	for (int i = 0; i < 10; i++){
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3"){
			if (kombinacija[i].dohvati_zog() == "K")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
int igrac::napola_spadi(vector<karta>kombinacija){
	int br = 0;
	for (int i = 0; i < 10; i++){
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3"){
			if (kombinacija[i].dohvati_zog() == "S")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}
int igrac::napola_bastona(vector<karta>kombinacija){
	int br = 0;
	for (int i = 0; i < 10; i++){
		if (kombinacija[i].dohvati_broj() == "1" || kombinacija[i].dohvati_broj() == "2" || kombinacija[i].dohvati_broj() == "3"){
			if (kombinacija[i].dohvati_zog() == "B")
				br++;
		}
	}
	return (br == 3) ? 3 : 0;
}