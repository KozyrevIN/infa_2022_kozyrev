#include <iostream>

int main()
{
    char mat[100][100];
    int n, m;
    std::cin >> n >> m;
    for (int i{0}; i<n; ++i)
        for (int j{0}; j<m+1; ++j)
            std::cin.get(mat[i][j]);

    for (int i{m}; i>=0; --i)
    {
        for (int j{0}; j<n; ++j)
            std::cout << mat[j][i];
        std::cout << '\n';
    }
}

