#ifndef MAC_H
#define MAC_H
#include"karta.h"
using namespace std;
class mac {
	vector<karta>deck;
public:
	mac();
	~mac();
	void shuffle();
	void print_deck();
	vector<karta> podijeli();
	vector<karta> getDeck();
	void setDeck(vector<karta> karte);

};

#endif;
