// Definirati strukturu kruznica i strukturu pravokutnik. Napisati funkciju
//koja prima niz pravokutnika i jednu kruznicu i vraæa broj pravokutnika koji
//sijeku kružnicu.Niz pravokutnika i kružnica šalju se u funkciju pomoæu const referenci.



#include <iostream>
#include <cmath>
using namespace std;

struct tocka
{
	double x,y;
	
};

 struct kruznica
 {
	 tocka centar;
	 double r;
};

 struct pravokutnik
 {
	 tocka a, b, c, d;
 };

 double udaljenost_tocaka(tocka a, tocka b)
 {
	 double udaljenost;
	 udaljenost = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
	 abs(udaljenost);
	 return udaljenost;
 }

 int fun(const kruznica jedna_kruznica, const pravokutnik* niz_pravokutnika)
 {
	 double a, b, c, d;
	 int br = 0;
	 int broj = sizeof(*niz_pravokutnika) / sizeof(pravokutnik*);
	 for (int i = 0; i < broj; i++)
	 {
		 a = udaljenost_tocaka(niz_pravokutnika[i].a, jedna_kruznica.centar);
		 b = udaljenost_tocaka(niz_pravokutnika[i].b, jedna_kruznica.centar);
		 c = udaljenost_tocaka(niz_pravokutnika[i].c, jedna_kruznica.centar);
		 d = udaljenost_tocaka(niz_pravokutnika[i].d, jedna_kruznica.centar);

		 if (a < jedna_kruznica.r || b < jedna_kruznica.r || c < jedna_kruznica.r || d < jedna_kruznica.r)
		 {
			 br++;
		 }
	 }
	 return br;
 }

int main()
{
	pravokutnik* niz_pravokutnika = (pravokutnik*)malloc(4 * sizeof(pravokutnik));
	kruznica jedna_kruznica;
	jedna_kruznica.centar.x = 5;
	jedna_kruznica.centar.y = 0;
	jedna_kruznica.r = 4;
	pravokutnik a, b, c, d;
	a.a.x = 3;
	a.b.x = 3;
	a.c.x = 1;
	a.d.x = 1;
	a.a.y = 0;
	a.b.y = 2;
	a.c.y = 2;
	a.d.y = 0;

	b.a.x = 12;
	b.b.x = 12;
	b.c.x = 10;
	b.d.x = 10;
	b.a.y = 0;
	b.b.y = 3;
	b.c.y = 0;
	b.d.y = 3;

	c.a.x = 4;
	c.b.x = 4;
	c.c.x = 0;
	c.d.x = 0;
	c.a.y = 0;
	c.b.y = 5;
	c.c.y = 0;
	c.d.y = 5;

	d.a.x = 4;
	d.b.x = 2;
	d.c.x = 4;
	d.d.x = 2;
	d.a.y = -3;
	d.b.y = -3;
	d.c.y = -5;
	d.d.y = -5;
	niz_pravokutnika[0] = a;
	niz_pravokutnika[1] = b;
	niz_pravokutnika[2] = c;
	niz_pravokutnika[3] = d;
	int br = fun(jedna_kruznica, niz_pravokutnika);
	cout << "broj je:" << br;
}
