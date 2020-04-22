#include "Board.h"
#include <iostream>
Board::Board(const Board* other){
	other->rows;
	other->cols;
	this->matrix = other->matrix;
}
Board::Board(int m, int n){
	this->rows = m;
	this->cols = n;
	this->matrix = new char* [m];
	for (int i = 0; i < m; i++){
		this->matrix[i] = new char[n];  

		for (int j = 0; j < n; j++){
			this->matrix[i][j] = ' ';
		}
	}
	this->edgeSigne = '?';
}
Board::~Board(){
	for (int i = 0; i < this->rows; i++){
		delete[] this->matrix[i];
	}
	delete this;
}
void Board::draw_char(Point p, char ch){
	int r = (int)round(p.x) - 1;
	int c = (int)round(p.y) - 1;
	this->matrix[r][c] = ch;
}
void Board::draw_up_line(Point p, char ch){
	int r = (int)round(p.x) - 1;
	int c = (int)round(p.y) - 1;
	for (int i = r; i >= 0; i--){
		this->matrix[i][c] = ch;
	}
}
void Board::draw_line(Point a, Point b, char ch){
	int x1 = (int)round(a.x) - 1;
	int x2 = (int)round(b.x) - 1;
	int y1 = (int)round(a.y) - 1;
	int y2 = (int)round(b.y) - 1;
	if (x1 == x2 && y1 == y2){
		this->draw_char(b, ch);
		return;
	}
	if (y1 == y2) {
		for (int i = 0; i < this->rows; i++){
			if (i == x1 || i == x2 || (i > x1&& i < x2) || (i > x2&& i < x1)){
				this->matrix[i][y1] = ch;

			}
		}
	}
	else{
		if (y1 > y2){
			int j = y2;
			for (int i = x2; i <= x1; i++){
				this->matrix[i][j] = ch; 
				j++;
			}
		}
		else{
			int j = y1;
			for (int i = x1; i <= x2; i++){
				this->matrix[i][j] = ch;
				j++;
			}
		}
	}
}
void Board::board_current_state(){

	for (int i = 0; i < this->rows; i++){
		if (i == 0){
			for (int x = 0; x < this->rows + 2; x++){
				std::cout << this->edgeSigne;
				std::cout << " ";
			}
		}
		std::cout << "\n";
		for (int j = 0; j < this->cols; j++){
			if (j == 0){
				std::cout << this->edgeSigne;
			}
			std::cout << "|";
			std::cout << this->matrix[i][j];
			if (j == this->cols - 1){
				std::cout << "|";
				std::cout << this->edgeSigne;
			}
		}
		std::cout << "\n";
		if (i == this->rows - 1){
			for (int x = 0; x < this->rows + 2; x++){
				std::cout << this->edgeSigne;
				std::cout << " ";
			}
		}
	}
}