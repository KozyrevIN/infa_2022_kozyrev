/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int n, counter1, counter0;
    std::cout << "Enter a number" << "\n";
    std::cin >> n;
    for (; n > 0; n /= 2)
        if (n % 2)
            ++counter1;
        else
            ++counter0;
    for (int i{0}; i < counter1; ++i)
        std::cout << "1";
    for (int i{0}; i < counter0; ++i)
        std::cout << "0";
    std::cout << "\n";
}

