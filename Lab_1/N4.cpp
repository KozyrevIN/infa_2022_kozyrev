/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>
#include <cmath>


int main()
{
    int length, a, max1{0}, max2{0};
    std::cin >> length;
    for (int i{0}; i < length ; ++i, std::cin >> a)
    {
        if (std::abs(a) > std::abs(max1))
            max1 = a;
        else if (a == -max1)
            max2 = a;
    }
    if (max2)
        std::cout << "Largest numbers are " << (std::abs(max1)) << " and " << ( - std::abs(max1)) << "\n";
    else
        std::cout << "Largest number is " << max1 << "\n";
}

