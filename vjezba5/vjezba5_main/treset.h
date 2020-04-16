#ifndef TRESET_H
#define TRESET_H
#include <vector>
#include <string>
#include "igrac.h"
#include "mac.h"
#include "karta.h"
using namespace std;
class treset
{
	int brojIgraca;
	vector<igrac>igraci;
	mac* spil;
	void bodovanje(igrac*);
	int troje(vector<karta>kombinacija);
	int napola_dinara(vector<karta>kombinacija);
	int napola_kupa(vector<karta>kombinacija);
	int napola_spadi(vector<karta>kombinacija);
	int napola_bastona(vector<karta>kombinacija);
public:
	treset(int brIgraca);
	~treset();
	void setBrojIgraca(int n);
	int getBrojIgraca();
	void zapocniIgru();
	mac* getMac();
	void setSpil(mac* s);
	vector<igrac> getIgraci();
	void setIgraci(vector<igrac> ig);

};
#endif 
