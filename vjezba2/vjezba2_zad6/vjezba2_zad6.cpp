//Definirati strukturu koja opisuje vektor. Struktura se sastoji od niza int
//elemenata, logièke i fizièke velièine niza.Fizièka velièina je inicijalno init, a
//kada se ta velièina napuni vrijednostima, alocira se duplo.
//Napisati funkcije vector_new, vector_delete, vector_push_back, vector_pop_back,
//vector_front, vector_back i vector_size.
#include <iostream>
using namespace std;

struct vektor
{
	int* elementi;
	int f_velicina;
	int log_velicina;

	void vector_new(int velicina)
	{
		if (velicina <= 0)
			cout << "minimalna velicina je 1" << endl;
		else
		{
			log_velicina = 0;
			f_velicina = velicina;
			elementi = new int[velicina];
		}

	}

	void vector_delete()
	{
		delete [] elementi;
		elementi = 0;
		f_velicina = 0;
		log_velicina = 0;
	}

	void vector_push_back(int n)
	{
		elementi[log_velicina] = n;
		log_velicina++;
		if (log_velicina == f_velicina)
		{
			int* t = new int[2 * f_velicina]; 
			for (int i = 0; i < n; ++i)
				t[i] = elementi[i];
			delete[] elementi;
			elementi = t;
			f_velicina = f_velicina * 2;

		}
	}

	void vector_pop_back()
	{
		elementi[log_velicina] = 0;
		log_velicina--;

	}

	int& front_vector()
	{
		return elementi[0];
	}

	int& back_vector()
	{
		return elementi[log_velicina - 1];
	}

	int vector_size()
	{
		return log_velicina;
	}

};

int main()
{
	vektor v;
	v.vector_new(7);
	v.vector_push_back(5);
	v.vector_push_back(2);
	v.vector_push_back(9);
	v.vector_push_back(3);
	v.vector_push_back(4);
	v.vector_push_back(1);
	
	//v.vector_pop_back();

	for (int i = 0; i < v.log_velicina; i++)
	{
		cout << v.elementi[i] << endl;
	}

	cout << "Prvi element je:" << v.front_vector() << endl;
	cout << "Zadnji element je:" << v.back_vector() << endl;
	cout << "Velicina niza je:" << v.vector_size() << endl;
	
	v.vector_delete();
}
