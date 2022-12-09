#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct card {
	const char *face;
	const char *suit;
};
typedef struct card Card;
void fillDeck(Card*const wDeck, const char *wFace[],
	const char *wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card *const wDeck);
int main()
{

}