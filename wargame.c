/* wargame.c
 * 
 * Prof. Frank Emanuel, Ph.D. 
 * Programming Chops Video Series
 * 2023-01-08
 */

#include <stdio.h>

/* global variable */

struct card {
    int value;
    int suit;
} deckOfCards[52];

void setUpInitialDeck(){

/*  adds a standard 52 card deck deckOfCards using 
    4 suits and 13 values 
*/

    int i, j, deckOffset = 0;

    for( i = 1; i < 5; i++ ){

        for ( j = 1; j < 14; j++){

            deckOfCards[deckOffset].suit = i;
            deckOfCards[deckOffset].value = j;
            deckOffset++;
        }
    }

    return;
}

void testDeck ( struct card deck[] ){

/*  print out each of the cards in the deck 
 */

    int offsetInDeck;

    for ( offsetInDeck = 0; offsetInDeck < 52; offsetInDeck++ ){

        printf ( "[ %d, %d] ", 
            deck[offsetInDeck].suit, 
            deck[offsetInDeck].value);
    }

    printf( "\n" );

    return;
}

int main(){

/* SETUP GAME */ 

    /* Create a deck of cards */ 

    setUpInitialDeck();

    /* printf( "%d = i \n", i ); */

    testDeck ( deckOfCards );

    /* Shuffle the deck of cards  */

    /* Deal half of the deck of cards to each player */ 

/* RUN GAME */ 

    /* Until one player has all of the cards */ 

        /* Each player reveals their top card  */

        /* Until the cards the same value?  */

            /* Each player discards three cards (WAR)  */

            /* Each player reveals their top card */ 

        /* Place all discarded and revealed cards at bottom of winner's deck */ 

    /* Declare the winner of the game */ 

    return 0;
}




