#ifndef TRESET_H
#define TRESET_H
#include <vector>
#include <string>
using namespace std;
class karta{
	string mojbroj;
	string mojzog;
public:
	karta();
	string dohvati_broj();
	string dohvati_zog();
	void ispisi_kartu();
	karta(int brz, int brb);
};
class mac{
	vector<karta>deck;
	vector<karta>novi;
public:
	mac();
	void shuffle();
	void print_deck();
	vector<karta> podijeli();
};
class igrac{
public:
	string ime;
	int bodovi = 0;
	vector<karta>kombinacija1;
	vector<karta>kombinacija2;
	vector<karta>kombinacija3;
	vector<karta>kombinacija4;
	igrac();
	void print(vector<karta>kombinacija);
	int troje(vector<karta>kombinacija);
	int napola_dinara(vector<karta>kombinacija);
	int napola_kupa(vector<karta>kombinacija);
	int napola_spadi(vector<karta>kombinacija);
	int napola_bastona(vector<karta>kombinacija);
};
#endif 
