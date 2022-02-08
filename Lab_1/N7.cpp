/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int n;
    std::cout << "Enter a number" << "\n";
    std::cin >> n;
    for (int i{1}; i <= n; ++i)
        if (n % i == 0)
            std::cout << i << " ";
}

