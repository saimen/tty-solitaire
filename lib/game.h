#ifndef GAME_H
#define GAME_H

#include "stack.h"
#include "deck.h"
#include "cursor.h"

#define NUMBER_OF_CARDS 52

#define STOCK_BEGIN_X        1
#define STOCK_BEGIN_Y        1

#define WASTE_PILE_BEGIN_X   9
#define WASTE_PILE_BEGIN_Y   1

#define FOUNDATION_BEGIN_Y   1
#define FOUNDATION_0_BEGIN_X 25
#define FOUNDATION_1_BEGIN_X 33
#define FOUNDATION_2_BEGIN_X 41
#define FOUNDATION_3_BEGIN_X 49

#define MANEUVRE_BEGIN_Y     9
#define MANEUVRE_0_BEGIN_X   1
#define MANEUVRE_1_BEGIN_X   9
#define MANEUVRE_2_BEGIN_X   17
#define MANEUVRE_3_BEGIN_X   25
#define MANEUVRE_4_BEGIN_X   33
#define MANEUVRE_5_BEGIN_X   41
#define MANEUVRE_6_BEGIN_X   49

struct deck *deck;
struct cursor *cursor;

int foundation_begin_x(int);
int maneuvre_begin_x(int);
bool valid_move(struct stack *, struct stack *);
bool maneuvre_stack(struct stack *);
void move_card(struct stack **, struct stack **);
void greet_player();
void initialize_game();
void end_game();

#endif
