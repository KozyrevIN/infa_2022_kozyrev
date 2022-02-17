#include <iostream>

int main()
{
    int mat[100][100];
    int n, m;
    std::cin >> n >> m;
    for (int i{0}; i<n; ++i)
        for (int j{0}; j<m; ++j)
            std::cin >> mat[i][j];
    for (int i{0}; i<m; ++i)
    {
        for (int j{0}; j<n; ++j)
            std::cout << mat[j][i] << ' ';
        std::cout << '\n';
    }
}

