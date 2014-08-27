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

/*
 * The deck will start from 0 to 51 where the suits are clubs, diamonds, hearts and spades
 * respectively.
 */
class Card {
  private:
    int value;

  public:
    Card(int thisValue){
      value = thisValue;
    };
    int getRank(Card c){
      return c.value % 13;
    };
    int getSuit(Card c){
      return (c.value % 52) / 13;
    };
    void showCard(Card c){
      switch (getRank(c)){
        case 0:
          cout << "Deuce of ";
          break;
        case 1:
          cout << "Three of ";
          break;
        case 2:
          cout << "Four of ";
          break;
        case 3:
          cout << "Five of ";
          break;
        case 4:
          cout << "Six of ";
          break;
        case 5:
          cout << "Seven of ";
          break;
        case 6:
          cout << "Eight of ";
          break;
        case 7:
          cout << "Nine of ";
          break;
        case 8:
          cout << "Ten of ";
          break;
        case 9:
          cout << "Jack of ";
          break;
        case 10:
          cout << "Queen of ";
          break;
        case 11:
          cout << "King of ";
          break;
        case 12:
          cout << "Ace of ";
          break;
      }

      switch (getSuit(c)){
        case 0:
          cout << "Clubs\n";
          break;
        case 1:
          cout << "Diamonds\n";
          break;
        case 2:
          cout << "Hearts\n";
          break;
        case 3:
          cout << "Spades\n";
          break;
      }
    };
};

class Deck {
  public:
    Deck(queue<int> deck, queue<int> a, queue<int> b){
      DeckQ = deck;
      A = a;
      B = b;
    };
    void shuffle();
    void dealCard(queue<int> deck){
      while(!deck.empty()){
        A.push(deck.pop());
        B.push(deck.pop());
      }
    };
    void playCard(queue<int> A, queue<int> B){

    };
  private:
    queue<int> DeckQ;
    queue<int> A;
    queue<int> B;
};

class Hand {
  public:
    int getCardsCount();
    void showHand(Card c);
};


int main(){
}
