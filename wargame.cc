#include<iostream>

using namespace std;

class Deck {
  public:
    //shuffle: put all the cards back and shuffle
    //cardsLeft: returns the number left in a deck
    //dealCard: deal one card from a deck and return it
    void shuffle();
    int cardsLeft();
    Card dealCard();
}

class Hand {
  public:
    void addCard(Card c);
    void removeCard(Card c);
    void removeCard(int position);
    int getCardsCount();
    Card getCard(int position);
    void sortBySuit();
    void sortByValue();
}

class Card {
  private:
    enum suits {DIAMONDS, CLUBS, HEARTS, SPADES};
  //Cards go from 2 - 9
    const int ACE = 1;
    const int JACK = 10;
    const int QUEEN = 11;
    const int KING = 12;
    const int JOKER = 1;

    const int suit;
    const int value;

  public:
    Card () {
      suit = SPADES;
      value = 1;
    }

    Card (int theValue, int theSuit) {
      if (theSuit != SPADES && theSuit != HEARTS && theSuit != CLUBS && theSuit != JOKER && theSuit != DIAMONDS) {
        cin >> "This isn't a legal suit";
      }
      if (theSuit != JOKER && (value < 1 || value > 13)) {
        cin >> "This isn't a legal card value";
      }
      value = theValue;
      suit = theSuit;
    }

    int getSuit() {
      return suit;
    }

    int getValue() {
      return value;
    }

    /*
     * Returns the string value of the suit
     */
    string getSuitAsString() {
      switch (suit) {
        case SPADES: return "Spades";
        case HEARTS: return "Hearts";
        case DIAMONDS: return "Diamonds";
        case CLUBS: return "Clubs";
        default: return "Joker";
      }
    }

    /*
     * Returns the string value of the card value
     */
    string getValueAsString() {
      switch (value) {
        case 1: return "1";
        case 2: return "2";
        case 3: return "3";
        case 4: return "4";
        case 5: return "5";
        case 6: return "6";
        case 7: return "7";
        case 8: return "8";
        case 9: return "9";
        case 10: return "Jack";
        case 11: return "Queen";
        case 12: return "King";
        default: return "Joker";
      }
    }

    /*
     * Returns the string of the card, which includes the value and the suit
     * Eg: Queen of Hearts, 10 of Diamonds, Joker and Joker # 4
     */
    string cardValue() {
      if (suit == JOKER) {
        if (value == 1) {
          return "Joker";
        }
        else {
          return "Joker #" + value;
        }
      }
      else {
        return getValueAsString() + " of " + getSuitAsString();
      }
    }
}
