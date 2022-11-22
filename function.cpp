#include <iostream>

/*
My first function in c++.
Note: Void means there's no return value for that function.
*/

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