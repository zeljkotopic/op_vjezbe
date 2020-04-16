#ifndef KARTA_H
#define KARTA_H
using namespace std;
class karta {
	string mojBroj;
	string mojZog;
public:
	karta();
	~karta();
	string dohvati_broj();
	string dohvati_zog();
	void ispisi_kartu();
	karta(int brz, int brb);
};
#endif;
