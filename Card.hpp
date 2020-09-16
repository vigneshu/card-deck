/**
 * Definition of the card class
 *
 * @author Vignesh Umasankar
 */
#pragma once
#include<ostream>
#include<iostream>
/**
 * @brief enum class to represent Suit of a card
 */
enum class Suit
{
  CLUBS,
  DIAMONDS,
  HEARTS,
  SPADES,
  UNKNOWN
};

/**
 * @brief enum class to represent Value of a card
 * 
 */
enum class CardValue
{
  TWO = 2,
  THREE,
  FOUR,
  FIVE,
  SIX,
  SEVEN,
  EIGHT,
  NINE,
  TEN,
  JACK,
  QUEEN,
  KING,
  ACE,
  UNKNOWN
};

/**
 * @brief Definition of Card class
 */
class Card {

  private:
    // Represent the suit of Card
    Suit suit_;
    // Represent the value of Card
    CardValue value_; 

  public:
    /**
     * @brief Constructor. Creates a Card object given its value and suit
     * @param value Value of Card
     * @param suit Suit of Card
     */
    Card(CardValue value, Suit suit);

    /**
     * @brief Returns the value of the Card
     * @return value of the Card
     */
    CardValue getValue() const;

    /**
     * @brief Sets the value of the Card
     * @param value value of the Card
     */
    void setValue(CardValue value);

    /**
     * @brief Returns the suit of the Card
     * @return suit of the Card
     */
    Suit getSuit() const;

    /**
     * @brief Sets the suit of the Card
     * @param suit suit of the Card
     */    
    void setSuit(Suit suit);

    virtual ~Card();
};

/**
 * @brief Function to print a Card class
 */
inline std::ostream& operator<<(std::ostream &out, const Card &card) {
  const CardValue value = card.getValue();
  std::string output_string;
  if (value > CardValue::ACE || value < CardValue::TWO) {
    output_string = "InvalidNumber";
  }
  switch (value) {
    case CardValue::ACE: output_string = "Ace"; break;
    case CardValue::JACK: output_string = "Jack"; break;
    case CardValue::QUEEN: output_string = "Queen"; break;
    case CardValue::KING: output_string = "King"; break;
    default: output_string = std::to_string(static_cast<int>(value) + 2); 
    break;
  }
  output_string += " of ";
  switch (card.getSuit()) {
    case Suit::SPADES: output_string += "Spades"; break;
    case Suit::CLUBS: output_string += "Clubs"; break;
    case Suit::HEARTS: output_string += "Hearts"; break;
    case Suit::DIAMONDS: output_string += "Diamonds"; break;
    default: output_string += "InvalidSuit"; break;
  }
  output_string += "\n";
  out << output_string;
  return out;   
}