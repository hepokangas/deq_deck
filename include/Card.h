#pragma once

#include <string>

/**
 * @brief The suit of a card.
 */

enum class Suit {
    Spades,
    Hearts,
    Diamonds,
    Clubs
};

/**
 * @brief The value of a card.
 */

enum class Value {
    two = 2, three, four, five, six, seven, eight, nine, ten,
    Jack, Queen, King, Ace
};

class Card {
public:
    /**
     * @brief Constructs a Card with a specified suit and value.
     * 
     * @param s The suit of the card.
     * @param v The value of the card.
     */
    Card(Suit s, Value v);

    /**
     * @brief Returns a string description of the card.
     * 
     * @return A string representing the card
     */

    std::string toString() const;

private:
    Suit suit;
    Value value;
};