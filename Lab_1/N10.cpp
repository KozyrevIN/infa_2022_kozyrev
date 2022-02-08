/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int main()
{
    int n, counter{0};
    std::cin >> n;
    int i{2};
    for (;counter != n; ++i)
    {
        bool flag{true};
        for (int j{2}; j < i; ++j)
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        if (flag)
            ++counter;
    }
    std::cout << i - 1;
}


