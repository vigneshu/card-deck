/**
 * Interface for Deck Class
 *
 * @author Vignesh Umasankar
 */

#pragma once
#include "Card.hpp"

class Deck {
	public: 
		/**
		 * @brief Destructor
		 */
		virtual ~Deck() = default;
		/**
		 * @brief Shuffle the deck in random order
		 */
		virtual void shuffle() = 0; 
		/**
		 * @brief Deal a card from deck and remove it from the pile
		 * @return A Card
		 */
		virtual Card deal_card() = 0; 
}; 

