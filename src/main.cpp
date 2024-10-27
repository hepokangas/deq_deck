#include <iostream>
#include <random>
#include "DeqDeck.h"

int main(void) {

    Deck<int> deck;

    for(int ix = 1; ix <= 52; ix++){
        deck.add(ix);
    }
    std::random_device rand;
    deck.shuffle(rand());
    std::cout << "Drawn from deck after shuffle:" << std::endl;
    for(int ix = 1; ix <= 52; ix++) {
        std::cout << deck.draw()  << " "; 
    }
    std::cout << std::endl;
    return 0;

}