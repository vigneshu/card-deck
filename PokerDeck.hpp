/**
 * Implementation of Deck class for a Poker deck
 *
 * @author Vignesh Umasankar
 */

#pragma once
#include "Deck.hpp"
#include <vector>

class PokerDeck : public Deck {
	public: 
		/**
		 * @brief Constructor. Creates a card deck of 52 cards numbered from 0 to 52
		 * The cards are maintained as vector of integers
		 * The cards are not shuffled and order is maintained
		 */
		PokerDeck(); 
		~PokerDeck() = default; 
		/**
		 * @brief Implementation of shuffle interface.Shuffles the deck
		 */
		void shuffle(); 
		/**
		 * @brief removes the top most card number and converts it to a 'Card' and returns it
		 * @throw Throws runtime_error if no card is available
		 * @return returns a `Card`
		 */
		Card deal_card();
		/**
		 * @brief Prints all cards in deck
		 */
		void print_deck();

	private:
		/**
		 * @brief Given a card number, converts it to an object of type `Card`
		 * 
		 * @param card_number The index of card
		 * @return Card
		 */
		Card make_card_from_number(int card_number);
		// List of cards stored as integers
		std::vector<int> deck_of_cards_;
		// Number of suits in the deck
		const int SUIT_COUNT = 4;
		// Number of cards in a suit
		const int CARD_PER_SUIT = 13;
		// Total deck size
		const int DECK_SIZE = CARD_PER_SUIT * SUIT_COUNT;
}; 

