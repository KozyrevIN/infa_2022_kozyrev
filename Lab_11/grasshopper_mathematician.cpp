//Козырев Иван
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    auto m = new int [n];
    for(int i = 0; i < n; ++i)
        std::cin >> m[i];

    auto res = new int [n] {0};
    res[0] = 1;
    for(int i = 0; i < n - 1; ++i)
    {
        res[i + 1] += res[i];
        if(m[i] != 1)
            res[i + m[i]] += res[i];
    }

    std::cout << res[n-1];
    delete[] m;
    delete[] res;
}


