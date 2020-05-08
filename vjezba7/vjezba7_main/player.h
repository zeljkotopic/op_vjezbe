#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;
class player {
protected:
	string name; 
	int bodovi;
	int tmp_ruka;
	bool par;
public:
	player();
	virtual void settmp_ruka() = 0;
	int get_ruka();
	void set_par(bool x);
	bool get_par();
	void set_name(string name);
	void set_bodovi(int bodovi);
	string get_name();
	int get_bodovi();
};
#endif