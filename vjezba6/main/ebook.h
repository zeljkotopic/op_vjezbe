#ifndef EBOOK_H
#define EBOOK_H
#include<iostream>
#include<string>
#include "book.h"
using namespace std;
class ebook : public book{
protected:
	float sizeMB;
	string fileName;
public:
	string getFileName();
	void setSize(float size) ;
	void setFileName(string name);
	float getSize();
};
#endif
