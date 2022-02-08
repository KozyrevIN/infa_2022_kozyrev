/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int counter{0};
    std::string input;
    std::cout << "Enter a sequence" << "\n";
    std::cin >> input;
    for (char i : input)
    {
        if (i == '1')
            ++counter;
        else if (i == '0');
        else
            break;
    }
    std::cout << counter;

}

