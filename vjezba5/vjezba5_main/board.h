#pragma once
#include <string>
#ifndef BOARD_H
#define BOARD_H
typedef struct Point{
	double x, y; 
};
class Board{
	int rows;
	int cols;
	char** matrix;
	char edgeSigne;
public:
	Board();
	Board(const Board* other); //copy contruktor
	Board(int m, int n);
	~Board();
	void draw_char(Point p, char ch); 
	void draw_up_line(Point p, char ch); 
	void draw_line(Point a, Point b, char ch);
	void board_current_state();
};
#endif 
