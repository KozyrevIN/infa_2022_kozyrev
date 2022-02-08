/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>
#include <cctype>


int main()
{
    std::string str;
    int n{0};
    std::cin >> str;
    for (char i : str)
    {
        if (std::isdigit(i))
            ++n;
        if (i == '@')
            break;
    }
    std::cout << n;
}

