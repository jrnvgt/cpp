#include "favourites.hpp"
#include <iostream>

int main() {
    Favourites favourites;
    favourites.letter = 'J';
    favourites.prime = 73;
    favourites.digit = '4';

    showFavouritesByValue(favourites);
    showFavouritesByReference(favourites);
    showFavouritesByPointer(&favourites);
    setPrime(favourites);
}

void showFavouritesByValue(Favourites favourites) {
    std::cout << "Favourite letter: " << favourites.letter << std::endl;
    std::cout << "Favourite prime: " << favourites.prime << std::endl;
    std::cout << "Favourite digit: " << favourites.digit << std::endl;
}

void showFavouritesByReference(Favourites& favourites) {
    std::cout << "Favourite letter: " << favourites.letter << std::endl;
    std::cout << "Favourite prime: " << favourites.prime << std::endl;
    std::cout << "Favourite digit: " << favourites.digit << std::endl;
}

void showFavouritesByPointer(Favourites* favourites) {
    std::cout << "Favourite letter: " << favourites->letter << std::endl;
    std::cout << "Favourite prime: " << favourites->prime << std::endl;
    std::cout << "Favourite digit: " << favourites->digit << std::endl;
}

void setPrime(Favourites& favourites) {
    favourites.prime = 37;
    std::cout << "Favourite prime: " << favourites.prime << std::endl;
}
