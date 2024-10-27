#include "Card.h"

Card::Card(Suit s, Value v) : suit(s), value(v) {}

std::string Card::toString() const {
    std::string suitStr;
    switch (suit) {
        case Suit::Spades: suitStr = "Spades"; break;
        case Suit::Hearts: suitStr = "Hearts"; break;
        case Suit::Diamonds: suitStr = "Diamonds"; break;
        case Suit::Clubs: suitStr = "Clubs"; break;
    }

    std::string valueStr;
    switch (value) {
        case Value::two: valueStr = "2"; break;
        case Value::three: valueStr = "3"; break;
        case Value::four: valueStr = "4"; break;
        case Value::five: valueStr = "5"; break;
        case Value::six: valueStr = "6"; break;
        case Value::seven: valueStr = "7"; break;
        case Value::eight: valueStr = "8"; break;
        case Value::nine: valueStr = "9"; break;
        case Value::ten: valueStr = "10"; break;
        case Value::Jack: valueStr = "Jack"; break;
        case Value::Queen: valueStr = "Queen"; break;
        case Value::King: valueStr = "King"; break;
        case Value::Ace: valueStr = "Ace"; break;
    }

    return valueStr + " of " + suitStr;
}