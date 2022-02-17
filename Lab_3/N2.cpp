#include <iostream>

int main()
{
    int m[1000];
    int n;
    double mean{0};
    std::cin >> n;
    for (int i{0}; i<n; ++i)
    {
        std::cin >> m[i];
        mean += m[i];
    }
    mean /= n;
    for (int i{0}; i<n; ++i)
    {
        if (m[i] > mean)
            std::cout << m[i] << ' ';
    }
}

