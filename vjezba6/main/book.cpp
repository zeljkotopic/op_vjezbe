#include "book.h"
#include "hardcopybook.h"
#include "ebook.h"
void book::setAuthor(string author){
	this->author = author;
}
string book::getAuthor(){
	return this->author;
}
void book::setTitle(string title){
	this->title = title;
}
string book::getTitle(){
	return this->title;
}
int book::getYear(){
	return this->year;
}
void book::setYear(int year){
	this->year = year;
}
void book::setSize(float size){
	this->size = size;
}
float hardcopybook::getSize(){
	return 0;
}
void hardcopybook::setSize(float size){
	this->pageNumber = size;
}
string ebook::getFileName(){
	return this->fileName;
}
void ebook::setSize(float size){
	this->sizeMB = size;
}
void ebook::setFileName(string name){
	this->fileName = name;
}
float ebook::getSize(){
	return this->sizeMB;
}