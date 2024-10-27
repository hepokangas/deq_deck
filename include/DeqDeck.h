#pragma once
#include <deque>
#include <stdexcept>
#include <iostream>

template<typename T>
class Deck {
private:
    std::deque<T> deck;
    void checkForEmptyDeck(void) const;
public:
    T top(void);
    T bottom(void);
    void add(const T& card);
    T draw(void);
    void shuffle(unsigned seed);
    void print() const;
};

#include "DeqDeck.hpp"