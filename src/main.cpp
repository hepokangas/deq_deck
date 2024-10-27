#include <iostream>
#include <random>
#include "DeqDeck.h"
#include "Card.h"

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

    Deck<Card> cardDeck;

    // Add 52 cards using Card class
    for (Suit suit : {Suit::Spades, Suit::Hearts, Suit::Diamonds, Suit::Clubs}) {
        for (Value Value : {Value::two, Value::three, Value::four, Value::five, Value::six, Value::seven                        ,
                          Value::eight, Value::nine, Value::ten, Value::Jack, Value::Queen, Value::King, Value::Ace}) {
            cardDeck.add(Card{suit, Value});
        }
    }

    cardDeck.shuffle(rand());

    std::cout << "Drawn from cardDeck after shuffle:" << std::endl;
    for (int ix = 0; ix < 52; ix++) {
        Card card = cardDeck.draw();
        std::cout << card.toString() << std::endl;
    }

    return 0;
}