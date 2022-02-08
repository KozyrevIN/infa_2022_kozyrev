/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int a;
    std::cout << "Enter a number" << "\n";
    std::cin >> a;
    std::cout << ((a % 13 == 0) ? "Yes" : "No") << "\n";
}

