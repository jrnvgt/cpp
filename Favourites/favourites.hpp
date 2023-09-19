#ifndef FAVOURITES
#define FAVOURITES

struct Favourites {
    char letter;
    int prime;
    char digit;
};

void showFavouritesByValue(Favourites favourites);
void showFavouritesByReference(Favourites& favourites);
void showFavouritesByPointer(Favourites* favourites);
void setPrime(Favourites& favourites);

#endif
