#include <iostream>

// Első függvényem c++ nyelven.

// A void annyi, hogy a függvénynek nincs visszatérési értéke.

void DemonstrationFunction()
{
    std::cout << "A demonstration függvényben vagyunk.\n";
}

int main()
{
    std::cout << "A main függvényben vagyunk.\n";
    DemonstrationFunction();
    std::cout << "Ismét a main függvényben vagyunk.\n";

    return 0;
}