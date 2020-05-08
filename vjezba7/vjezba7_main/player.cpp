#include "player.h"
#include "humanplayer.h"
#include "computerplayer.h"
#include <iostream>
using namespace std;
player::player(){
	this->bodovi = 0;
}
int player::get_ruka(){
	return this->tmp_ruka;
}
void player::set_par(bool x){
	this->par = x;
}
bool player::get_par(){
	return this->par;
}
void player::set_name(string name){
	this->name = name;
}
void player::set_bodovi(int bodovi){
	this->bodovi = bodovi;
}
string player::get_name(){
	return this->name;
}
int player::get_bodovi(){
	return this->bodovi;
}
void humanplayer::settmp_ruka(){
	cout << "Unesite broj:" << endl;
	int unos;
	cin >> unos;
	this->tmp_ruka = unos;
}
void computerplayer::settmp_ruka(){
	int pcruka = rand() % 6;
	this->tmp_ruka = pcruka;
	cout <<"PLAYER "<< this->name <<" THROWN " << tmp_ruka << endl;
}