#include <iostream>
#include <tuple>
using namespace std;

void swap(int& a,int& b)
{
	int t = a;
	a = b;
	b = t;

}

int main()
{
   
	int x(6);
	int y(4);
	swap(x, y);
}

