#include <iostream>
#include <vector>
#include <algorithm>
#include "Stack.h"
using namespace std;
int main()
{
	Stack<int>k;
	k.push('c');
	k.push('F');
	k.push('A');
	k.push('a');
	k.push('B');
	k.push('f');
	k.sort();
	k.pop();
	bool m = k.is_empty();
	if (m == true)
		return -1;
	cout << k;
}

