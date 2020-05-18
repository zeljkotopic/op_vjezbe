#ifndef MONEY_H
#define MONEY_H
using namespace std;
class money {
protected:
	int kn;
	int lp;
public:
	money(int kn = 0,int lp = 0);
	int get_kn();
	void set_kn(int kn);
	int get_lp();
	void set_lp(int lp);
	friend money operator+(money a,money b);
	friend money operator-(money a, money b);
	void operator+=(money a);
	void operator-=(money a);
	friend ostream& operator<<(ostream& out,money& c);
	operator double();
};
#endif // !MONEY_H

