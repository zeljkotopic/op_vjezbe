#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <string>
#include "book.h"
#include "ebook.h"
#include "hardcopybook.h"
#include "library.h"
using namespace std;

hardcopybook* makeNormalBook(string line) {
	string ime;
	string ime_knjige;
	string broj_str;
	int arr[3];
	for (int i = 0, j = 0; i < line.length(); i++) {
		if (line[i] == ';') {
			arr[j] = i;
			j++;
		}
	}
	for (int i = 0; i < 3; i++) {
		if (i == 0) 
			ime = line.substr(0, arr[i]);
		if (i == 1) 
			ime_knjige = line.substr(arr[i - 1] + 1, arr[i] - arr[i - 1] - 1);
		if (i == 2) 
			broj_str = line.substr(arr[i - 1] + 1, line.length() - arr[i - 1] - 1);
	}
	hardcopybook* knjiga = new hardcopybook;
	knjiga->setAuthor(ime);
	knjiga->setTitle(ime_knjige);
	knjiga->setSize(std::stoi(broj_str));
	return knjiga;
}
ebook* makeEBook(string line) {
	string ime;
	string pdf;
	string ime_knjige;
	string sizeMB;
	int arr[4];
	for (int i = 0, j = 0; i < line.length(); i++) {
		if (line[i] == ';') {
			arr[j] = i;
			j++;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (i == 0) 
			ime = line.substr(0, arr[i]);
		if (i == 1) 
			ime_knjige = line.substr(arr[i - 1] + 1, arr[i] - arr[i - 1] - 1);
		if (i == 2) 
			pdf = line.substr(arr[i - 1] + 1, arr[i] - arr[i - 1] - 1);
		if (i == 3) 
			sizeMB = line.substr(arr[i - 1] + 1, line.length() - arr[i - 1] - 1);
	}
	ebook* eknjiga = new ebook;
	eknjiga->setAuthor(ime);
	eknjiga->setTitle(ime_knjige);
	eknjiga->setSize(std::stod(sizeMB));
	eknjiga->setFileName(pdf);
	return eknjiga;
}
int main()
{
	ifstream fin("knjige.txt");
	string line;
	int br = 0;
	library* lib = new library();
	vector<hardcopybook> knjige;
	vector<ebook> eknjige;
	string ime;
	while (getline(fin, line))
	{
		for (int i = 0; i < line.length(); i++) {
			if (line[i] == ';') {
				br += 1;
			}
		}
		if (br == 2)
			lib->bookArr.push_back(makeNormalBook(line));
		else if (br == 3) 
			lib->bookArr.push_back(makeEBook(line));
		br = 0;
	}
	vector<string>s = lib->getTitlesOfAuthor("Aldous Huxley");
	for (int i = 0; i < s.size(); i++)
		cout << s[i] << endl;
	float x = lib->oneAuthorBookSizeInMB("Simson Garfinkel, Daniel Weise and Steven Strassmann");
	cout << x << endl;	
	vector<string> z;
	z.push_back("ak");
	vector<book*>k = lib->returnBookWithWord(z);
	for (int i = 0; i < k.size(); ++i)
		cout << k[i]->getTitle() << endl;

	delete lib;
}
