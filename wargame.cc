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
    int getValue();
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
    void addCard(Card c);
    void removeCard(Card c);
    void removeCard(int position);
    int getCardsCount();
    void showHand(Card c);
};


int main(){
}
