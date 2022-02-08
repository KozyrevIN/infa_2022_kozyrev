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
        if (i == 0 || i == height - 1)
            for (int j{0}; j < width; ++j)
                std::cout << "+";
        else
        {
            std::cout << "+";
            for (int j{1}; j < width - 1; ++j)
                std::cout << " ";
            std::cout << "+";
        }

        std::cout << "\n";
    }
}
