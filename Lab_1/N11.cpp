/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>
#include <cmath>


int main()
{
    int n;
    std::cout << "Enter an odd number" << "\n";
    std::cin >> n;
    for (int i{0}; i < n; ++i)
    {
        for (int j{0}; j < n ; ++j)
            std::cout << ((std::abs(n / 2 - j) + std::abs(n / 2 - i) <= n / 2)?
                    "+" : " ");
        std::cout << "\n";
    }

}

