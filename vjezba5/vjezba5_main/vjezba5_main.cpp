#include <iostream>
#include "Board.h"
int main()
{
	Board* newBoard = new Board(5, 5);
	Point p, p1;
	p.x = 1;
	p.y = 1;
	p1.x = 3;
	p1.y = 3;
	newBoard->draw_char(p, 'g');
//	newBoard->draw_line(p, p1, 'a');
//	newBoard->draw_up_line(p1, 'x');
	newBoard->board_current_state();
	Board* copy = new Board(newBoard);
}