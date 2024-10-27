# deq_deck
# Implementation of deck using C++ deque
- The container “Deck” represents a collection of values like a deck of cards. 
- The Deck is able to contain elements of any one type.
- The src folder contains an example usage by main.cpp that is using integers and Card class

## Instructions to build:
```
mkdir build
cd build
cmake ..
make
```

## Executable binaries  are output in:
```
build/bin
```

# Unit tests
- Are implemented using gtest
- Using integers to test functionality
- Radomization of the shuffle is not tested, since there is a theoretical chance that random numbers generate same shuffle.
- Can be executed by running the test binary in build/bin folder