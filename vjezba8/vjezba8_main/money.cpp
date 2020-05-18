#include <iostream>
#include "money.h"
using namespace std;
money::money(int kn,int lp){
	this->kn = kn;
	this->lp = lp;
}
int money::get_kn(){
	return this->kn;
}
void money::set_kn(int kn){
	this->kn = kn;
}
int money::get_lp(){
	return this->lp;
}
void money::set_lp(int lp){
	this->lp = lp;
}
void money::operator+=(money a){
	int tmp = 0;
	this->kn += a.kn;
	int lp = (a.lp + this->lp);
	if (lp >= 100) {
		tmp = lp - 100;
		this->lp = tmp;
		kn = kn + 1;
	}
	else
		this->lp += a.lp;
}
void money::operator-=(money a){
	int tmp = 0;
	this->kn -= a.kn;
	int lp = ( this->lp - a.lp );
	if (lp < 0) {
		tmp = lp + 100;
		this->lp = tmp;
		this->kn -= 1;
	}
	else
		this->lp -= a.lp;
}
money operator+(money a,money b){
	int tmp = 0;
	int kn = (a.kn + b.kn);
	int lp = (a.lp + b.lp);
	if (lp >= 100){
		tmp = lp - 100;
		lp = tmp;
		kn = kn + 1;
	}
	return money(kn,lp);
}
money operator-(money a, money b){
	int tmp = 0;
	int kn = (a.kn - b.kn);
	int lp = (a.lp - b.lp);
	if (lp < 0) {
		tmp = lp + 100;
		lp = tmp;
		kn -= 1;
	}
	return money(kn, lp);
}
ostream& operator<<(ostream& out,money &c){
	return out << "racun : " <<  c.kn << "kn "<< c.lp << "lp";
}
money::operator double(){
	double lp = (double)this->lp;
	lp = lp / 100;
	double kn = (double)this->kn;
	return lp + kn;
}


