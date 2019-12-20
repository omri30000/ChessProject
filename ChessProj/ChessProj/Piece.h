#include <iostream>
#include <vector>
#include "Position.h"

using std::string;
using std::cout;
using std::cin;

const int TABLE_SIZE = 8;

class Piece {
protected:
	
	string _type;
	string _color;
	//std::vector<Piece*> _moveOptions;
	Position _pos;

public:
	Piece(string color, string type);
	Piece(string color, string type, Position pos);
	//virtual void buildMoveOptions(const Piece* board[][TABLE_SIZE]);
	const string getType();
	const string getColor();
	virtual const bool isValidMove(const Piece* table, Position src, Position dest) = 0;
};