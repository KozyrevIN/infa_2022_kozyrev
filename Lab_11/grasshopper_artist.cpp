//Козырев Иван
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    auto colors = new int [n];
    auto jar = new int [n];
    for(int i = 0; i < n; ++i)
        std::cin >> colors[i];
    for(int i = 0; i < n; ++i)
        std::cin >> jar[i];

    auto res = new int [n] {0};
    res[0] = 1; res[1] = 1;

    for(int i = 2; i < n; ++i)
    {
        if((colors[i - 1] == colors[i]) || (jar[i - 1] == colors[i]))
            res[i] += res[i - 1];
        if((colors[i - 2] == colors[i]) || (jar[i - 2] == colors[i]))
            res[i] += res[i - 2];
    }

    std::cout << res[n-1];
    delete[] colors; delete[] jar;
    delete[] res;
}




