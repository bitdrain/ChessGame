/*
 * Board.h
 *
 *  Created on: 16 Feb 2019
 *      Author: jperez
 */

#ifndef BOARD_H_
#define BOARD_H_

class Board {
public:

	/* Creates board with pieces in initial configuration */
	Board();
	virtual ~Board();

	void DrawBoard();

	bool IscellOccuppy();

	Piece* WhichPieceAtCell();

	void PlaceAt(Piece * piece);

private:
	const int boardWidth;
	const int boardHeight;
	Piece* BoardTable[boardWidth][boardHeight];
};

#endif /* BOARD_H_ */
