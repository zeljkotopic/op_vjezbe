#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector>
#include <new>
#include<cstdlib>
#include <string>
#include <cstdint>
using namespace std;
template<typename T> 
class Stack {
public:
	vector<T>elements;
public:
	void push(T el) { this->elements.push_back(el); }
	void pop() {this->elements.pop_back(); }
	bool is_empty() { return this->elements.empty(); }
	friend ostream& operator<<(ostream& out, Stack& c) { 
		if (isalpha(c.elements.at(0))){
			for (int i = 0; i < c.elements.size(); ++i)
				out << (char)c.elements.at(i) << ' ';
		}
		else{
			for (int i = 0; i < c.elements.size(); ++i)
				out << c.elements.at(i) << ' ';
		}
		return out;
	}
	void sort(){
		const size_t n = this->elements.size();
		for (int gap = n / 2; 0 < gap; gap /= 2)
			for (int i = gap; i < n; ++i)
				for (int j = i - gap; 0 <= j; j -= gap){
					if (isalpha(this->elements[j])){
						int prvi = tolower(this->elements[j]); // B
						int drugi = tolower(this->elements[j + gap]); //a
						if (drugi < prvi){
							swap(this->elements[j], this->elements[j + gap]);
						}
					}
					else{
						if (this->elements[j + gap] < this->elements[j]){
							swap(this->elements[j],this->elements[j + gap]);
						}
					}
				}
	}
};
#endif // !STACK_H
