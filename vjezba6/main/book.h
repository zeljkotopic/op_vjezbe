#ifndef BOOK_H
#define BOOK_H
#include<iostream>
#include<string>
using namespace std;
class book{
protected:
	string author;
	string title;
	float size;
	int year;
public:
	void setAuthor(string author);
	string getAuthor();
	void setTitle(string title);
	string getTitle();
	int getYear();
	void setYear(int year);
	virtual float getSize() = 0;
	virtual void setSize(float size);
};
#endif
