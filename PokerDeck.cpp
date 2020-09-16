#include <iostream> 
#include <algorithm> 
#include <ctime>
#include <stdexcept>
#include "PokerDeck.hpp"

PokerDeck::PokerDeck() {
	deck_of_cards_.resize(DECK_SIZE);
	for (int i = 0; i < deck_of_cards_.size(); i++) {
		deck_of_cards_[i] = i;
	}
}

void PokerDeck::print_deck() {
	std::cout << "Deck size: " << deck_of_cards_.size() << std::endl;
	for (auto card_number: deck_of_cards_) {
		std::cout << make_card_from_number(card_number);
	}
}
void PokerDeck::shuffle() {
    srand(time(0));
    uint deck_size = deck_of_cards_.size();
    for (int i=0; i < deck_size ;i++)  { 
        int rand_pos = i + (rand() % (deck_size -i)); 
        std::swap(deck_of_cards_[i], deck_of_cards_[rand_pos]); 
    }
}

Card PokerDeck::make_card_from_number(int card_number) {
	Suit suit = static_cast<Suit>(card_number / CARD_PER_SUIT);
	CardValue val = static_cast<CardValue>((card_number % CARD_PER_SUIT) + 2);
	return Card(val, suit);
}

Card PokerDeck::deal_card() {
	int deck_size = deck_of_cards_.size();
	if (deck_of_cards_.size() == 0) {
		throw std::runtime_error("The deck is empty");
	}

	int card_number = deck_of_cards_.back();
	deck_of_cards_.pop_back();
	return make_card_from_number(card_number);
}

