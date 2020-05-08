#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include <string>
#include <vector>
#include "book.h"
#include "ebook.h"
#include "hardcopybook.h"
using namespace std;
class library {
	float size;
public:
	~library();
	vector<string> getTitlesOfAuthor(string author);
	float oneAuthorBookSizeInMB(string author);
	vector<book*> returnBookWithWord(vector<string> word);
	vector<book*>bookArr;
	vector<book*> getBooks();
};
#endif

