#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include <numeric>
#include "DeqDeck.h"

TEST(DeckTest, AddTopBottom) {
    Deck<int> deck;
    deck.add(10);
    deck.add(20);
    EXPECT_EQ(deck.top(), 20);
    EXPECT_EQ(deck.bottom(),10);
}

TEST(DeckTest, DrawEmptyExcept) {
    Deck<int> deck;
    deck.add(10);
    deck.add(20);
    EXPECT_EQ(deck.draw(), 20); 
    EXPECT_EQ(deck.draw(), 10);
    EXPECT_THROW(deck.draw(), std::out_of_range);
}

TEST(DeckTest, Shuffle) {
    Deck<int> deck;
    const int NumberOfCards = 100;
    const unsigned Seed = 10;

    std::vector<int> reference(NumberOfCards);
    std::vector<int> shuffled;

    std::iota(reference.begin(), reference.end(), 1);
    std::reverse(reference.begin(), reference.end());
    for (int ix = 1; ix <= NumberOfCards; ix ++) {
        deck.add(ix);
    }
    deck.shuffle(Seed);
    for (int ix = 0; ix < NumberOfCards; ix ++) {
        shuffled.push_back( deck.draw());
    }

    EXPECT_TRUE(std::is_permutation(reference.begin(), reference.end(), shuffled.begin()));
}