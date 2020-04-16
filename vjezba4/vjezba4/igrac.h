#ifndef IGRAC_H
#define IGRAC_H
#include "karta.h"
using namespace std;
class igrac {
	string ime;
	int bodovi;
	vector<karta>igraceveKarte;
public:
	igrac();
	~igrac();
	void setIme(string i);
	string getIme();
	void setIgraceveKarte(vector<karta>karte);
	vector<karta>getIgraceveKarte();
	void setBodovi(int b);
	int getBodovi();
	void print();


};
#endif;
