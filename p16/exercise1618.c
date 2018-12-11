a)
typedef enum {empty, pawn, knight, bishop, rook, queen, king} Piece;

typedef enum {black, white} Color;

b)
typedef struct{
	Color color;
	Piece piece;
}Square;

c)
Square board[8][8];

d)
Square board[8][8] = {{{ ROOK,  W }, { KNIGHT, B }, { BISHOP, W }, { KING,  B },
  { QUEEN, B }, { BISHOP, W }, { KNIGHT, B }, { ROOK,  W }},
 {{ PAWN,  W }, { PAWN,   B }, { PAWN,   W }, { PAWN,  B },
  { PAWN,  B }, { PAWN,   W }, { PAWN,   B }, { PAWN,  W }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, 
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W },
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W },
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ EMPTY, B }, { EMPTY,  W }, { EMPTY,  B }, { EMPTY, W }, 
  { EMPTY, W }, { EMPTY,  B }, { EMPTY,  W }, { EMPTY, B }},
 {{ PAWN,  W }, { PAWN,   B }, { PAWN,   W }, { PAWN,  B }, 
  { PAWN,  B }, { PAWN,   W }, { PAWN,   B }, { PAWN,  W }},
 {{ ROOK,  W }, { KNIGHT, B }, { BISHOP, W }, { KING,  B }, 
  { QUEEN, B }, { BISHOP, W }, { KNIGHT, B }, { ROOK,  W }}};