#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "mac.h"
using namespace std;
mac::mac() {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 10; j++) {

			karta* nova = new karta(i, j);
			this->deck.push_back(*nova);
		}
	}
}
mac::~mac(){
	delete[] & (this->deck);
	//cout << "mac dest" << endl;
}
void mac::shuffle() {
	random_shuffle(this->deck.begin(), this->deck.end());
}
void mac::print_deck() {
	for (int i = 0; i < 40; i++) {
		this->deck[i].ispisi_kartu();
	}
}
vector<karta>mac::podijeli() {
	vector<karta>novi(10);
	copy(this->deck.begin(), this->deck.begin() + 10, novi.begin());
	this->deck.erase(this->deck.begin(), this->deck.begin() + 10);
	return novi;
}
vector<karta> mac::getDeck(){
	return this->deck;
}
void mac::setDeck(vector<karta> karte){
	this->deck = karte;
}