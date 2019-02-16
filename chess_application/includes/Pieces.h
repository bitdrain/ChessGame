/*
 * Pieces.h
 *
 *  Created on: 16 Feb 2019
 *      Author: jperez
 */


//enum type as before...
//Where R=rook, N=knight, B=bishop, Q=queen, K=king, P=pawn

/*
Rules:
Pawns
Normally move forward one space.
Move diagonal one space to kill.
May move two spaces forward on the first move.
But may be killed En Passant after this move by attacking the space behind the pawn.
May be exchanged for any piece except a King by reaching the opposite side of the board.
Bishops
Move diagonally any distance.
Kill by landing on a space occupied by an opponent's piece.
Knights
Move in "L" shape (one space one direction, two in a perpendicular direction).
May go "over" other pieces.
Kill by landing on a space occupied by an opponent's piece.
Rooks
Move horizontally or vertically any distance.
Kill by landing on a space occupied by an opponent's piece.
May "castle" with the king under certain circumstances (see below).
Queens
Move any distance horizontally, vertically, or diagonally.
Kill by landing on a space occupied by an opponent's piece.
Kings
Move one space horizontally, vertically, or diagonally.
Kill by landing on a space occupied by an opponent's piece.
May "castle" with a rook under certain circumstances (see below).
The game is over:
when the opponent's king cannot escape being taken (i.e. Checkmate).
or one player can make no move without putting his/her king in danger (i.e. Stalemate)

*/


#ifndef PIECES_H_
#define PIECES_H_

class Pieces {
public:
	Pieces();
	virtual ~Pieces();
};

#endif /* PIECES_H_ */
