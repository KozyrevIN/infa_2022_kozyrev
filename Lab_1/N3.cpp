/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int height, width;
    std::cout << "Enter height and width" << "\n";
    std::cin >> height >> width;
    for (int i{0}; i < height; ++i)
    {
        for (int j{0}; j < width; ++j)
        {
            std::cout << "+";
        }
        std::cout << "\n";
    }
}

