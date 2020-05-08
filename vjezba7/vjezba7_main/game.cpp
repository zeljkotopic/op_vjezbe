#include "game.h"
#include "computerplayer.h"
#include "humanplayer.h"
#include <iostream>
void game::par_nepar()
{
	int br_igraca = 0;
	int points = 0;
	int par = 0;
	cout << "GAME START" << endl;
	cout << "INSERT NUMBER OF PLAYERS" << endl;
	cin >> br_igraca;
	cout << "INSERT MAX POINTS" << endl;
	cin >> points;
	if (br_igraca > 2){
		cout << "invalid input!!!" << endl;
		return;
	}
	if (br_igraca == 1){// jedan human jedan pc
		this->a = new humanplayer;
		this->b = new computerplayer;
	}
	else if (br_igraca == 2) {// oba human
		this->a = new humanplayer;
		this->b = new humanplayer;
	}
	else {  // oba pc
		this->a = new computerplayer;
		this->b = new computerplayer;
	}
	string name;
	cout << "ENTER NAME 1:" << endl;
	cin >> name; 
	this->a->set_name(name);
	cout << "ENTER NAME 2:" << endl;
	cin >> name;
	this->b->set_name(name);
	cout << "FIRST PLAYER EVEN(1) OR ODD(0):";
	cin >> par;
	if (par > 1){
		cout << "INVALID INPUT";
		return;
	}
	if (par == 1){
		this->a->set_par(true);
		this->b->set_par(false);
	}
	else{
		this->a->set_par(false);
		this->b->set_par(true);
	}
	while (true)
	{
		int  rez = 0;
		this->a->settmp_ruka();
		this->b->settmp_ruka();
		rez = this->a->get_ruka() + this->b->get_ruka();
		if (rez % 2 == 0){
			if (this->a->get_par() == true)
				this->a->set_bodovi(this->a->get_bodovi() + 1);
			else
				this->b->set_bodovi(this->b->get_bodovi() + 1);
		}
		else{
			if (this->a->get_par() == false)
				this->a->set_bodovi(this->a->get_bodovi() + 1);
			else
				this->b->set_bodovi(this->b->get_bodovi() + 1);
		}
		if ((points == this->a->get_bodovi()) || (points == this->b->get_bodovi())){
			if (this->a->get_bodovi() == points)
				cout << "WINNER IS :" << this->a->get_name() << endl;
			else
				cout << "WINNER IS :" << this->b->get_name() << endl;
			break;
		}
	}
}
