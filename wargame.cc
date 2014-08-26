/*
 * Copyright (C) Lynn Tran
 *
 * Implementation of war card game using Queue and OOP
 */
#include<string>
#include<iostream>
#include<queue>
#define DECKSIZE 52

using namespace std;

class Card {
  private:
    int value;

  public:
    Card();
    int getRank(Card c){};
    int getCard();
};

class Deck {
  public:
    Deck();
    void shuffle();
    Card dealCard();
    void playCard();
};

class Hand {
  public:
    int getCardsCount();
    void showHand(Card c);
};


int main(){
}
