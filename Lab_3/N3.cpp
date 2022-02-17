#include <iostream>

int main()
{
    int m[100][100];
    int n;
    std::cin >> n;
    for (int i{0}; i<n; ++i)
        for (int j{0}; j<n; ++j)
            std::cin >> m[i][j];
    for (int i{0}; i<n; ++i)
    {
        for (int j{0}; j<n; ++j)
            std::cout << m[j][i] << ' ';
        std::cout << '\n';
    }
}

