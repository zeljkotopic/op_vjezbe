#include "library.h"
using namespace std;
library::~library(){
	this->bookArr.clear();
}
vector<string> library::getTitlesOfAuthor(string author) {
	vector<string> namesOfTales;
	for (int i = 0; i < this->bookArr.size(); i++) {
		if (this->bookArr[i]->getAuthor() == author) {
			namesOfTales.push_back(this->bookArr[i]->getTitle());
		}
	}
	return namesOfTales;
}
float library::oneAuthorBookSizeInMB(string author) {
	float resultCount = 0;
	for (int i = 0; i < this->bookArr.size(); i++) {
		if (this->bookArr[i]->getAuthor() == author) {
			resultCount += this->bookArr[i]->getSize();
		}
	}
	return resultCount;
}
vector<book*> library::returnBookWithWord(vector<string> word) {
	int br = 0;
	vector<book*> returnBooks;
	for (int j = 0; j < word.size(); j++) {
		for (int i = 0; i < this->bookArr.size(); i++) {
			if (this->bookArr[i]->getTitle().find(word[j]) != string::npos) {
				returnBooks.push_back(this->bookArr[i]);
				br++;
			}
		}
	}
	return returnBooks;
}
vector<book*>library::getBooks() {
	return this->bookArr;
}