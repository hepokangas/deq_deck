#pragma once
#include <deque>
#include <stdexcept>
#include <iostream>


/**
 * @brief A generic deck of items
 * 
 * @tparam T The type of items in the deck.
 */

template<typename T>
class Deck {
private:
    /**
     * @brief Container holding the items in the deck.
     */
    std::deque<T> deck;
    /**
     * @brief Checks if the deck is empty and throws an exception if it is.
     * 
     * @throws std::out_of_range if the deck is empty.
     */
    void checkForEmptyDeck(void) const;
public:
    /**
     * @brief Returns the top item.
     * 
     * @return The top item.
     * @throws std::out_of_range if the deck is empty.
     */
    T top(void);
    /**
     * @brief Returns the bottom item.
     * 
     * @return The bottom item.
     * @throws std::out_of_range if the deck is empty.
     */
    T bottom(void);
    /**
     * @brief Adds an item to the top.
     * 
     * @param card The item to add.
     */
    void add(const T& card);
    /**
     * @brief Removes and returns the top item from the deck.
     * 
     * @return The top item.
     * @throws std::out_of_range if the deck is empty.
     */
    T draw(void);
    /**
     * @brief Shuffles the items in the deck using a specified seed.
     * 
     * @param seed The seed used for shuffling.
     */
    void shuffle(unsigned seed);
};

#include "DeqDeck.hpp"