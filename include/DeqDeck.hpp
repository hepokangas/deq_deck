#include <random>
#include <algorithm>

template<typename T>
void Deck<T>::checkForEmptyDeck() const {
    if (deck.empty()) {
        throw std::out_of_range("Accessing empty Deck");
    }
}

template<typename T>
T Deck<T>::top() {
    checkForEmptyDeck();
    return deck.front();
}

template<typename T>
T Deck<T>::bottom() {
    checkForEmptyDeck();
    return deck.back();
}

template<typename T>
void Deck<T>::add(const T& card) {
    try {
        deck.push_front(card);
    } catch (const std::bad_alloc& err) {
        std::cerr << "Memory allocation failed: " << err.what() << std::endl;
        throw;
    }
}

template<typename T>
T Deck<T>::draw() {
    checkForEmptyDeck();
    T topCard = deck.front();
    deck.pop_front();
    return topCard;
}

template<typename T>
void Deck<T>::shuffle(unsigned seed) {
    std::mt19937 g(seed);
    std::shuffle(deck.begin(), deck.end(), g);
}
