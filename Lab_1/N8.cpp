/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int n;
    std::cout << "Enter a number" << "\n";
    std::cin >> n;
    for (int i{0}; i < n; ++i)
    {
        for (int j{0}; j <= i ; ++j)
            std::cout << "+";
        std::cout << "\n";
    }

}

