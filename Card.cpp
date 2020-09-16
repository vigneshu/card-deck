#include <sstream>
#include "Card.hpp"

Card::Card(CardValue value, Suit suit): value_(value), suit_(suit) {
}

Card::~Card() {
}

CardValue Card::getValue() const {
   return value_;
}

void Card::setValue(CardValue val) {
   value_ = val;
}

Suit Card::getSuit() const {
   return suit_;
}

void Card::setSuit(Suit suit) {
   suit_ = suit;
}
