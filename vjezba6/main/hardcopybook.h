#ifndef HARDCOPYBOOK_H
#define HARDCOPYBOOK_H
#include<iostream>
#include<string>
#include "book.h"
using namespace std;
class hardcopybook : public book{
protected:
	int pageNumber;
public:
	float getSize();
	void setSize(float size);
};
#endif

