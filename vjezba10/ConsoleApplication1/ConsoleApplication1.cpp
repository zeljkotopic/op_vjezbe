#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;
class iznimka{
public:
	string err;
	iznimka(const char* s) : err(s) {}
};
bool bigger(int i){
	if (i > 500)
		return true;
	return false;
}
int main()
{
	vector<int> v;
	ifstream f("numbers.txt");
	try{
		if (!f) throw iznimka("file is empty!!");
	}
	catch(iznimka x){
		cout << "error : " << x.err << endl;;
	}
	istream_iterator<int> is(f), eos;
	copy(is, eos, back_inserter(v));
	int bigger_than_500 = count_if(v.begin(), v.end(), bigger);
	cout << "Numbers bigger than 500 : " << bigger_than_500 << endl;
	cout << "Max number : " << *max_element(v.begin(), v.end()) << endl;
	cout << "Min number : " << *min_element(v.begin(), v.end()) << endl;
	v.erase(remove_if(v.begin(), v.end(), [](int n) { return n < 300; }),v.end());
	sort(v.begin(), v.end(), greater<int>());
	ostream_iterator<int> os(cout, ",");
	copy(v.begin(), v.end(), os);
}
