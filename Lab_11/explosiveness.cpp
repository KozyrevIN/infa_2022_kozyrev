//Козырев Иван
#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "2\n";
        return 0;
    }

    auto a = new int* [4];
    for(int i = 0; i < 4; ++i)
    {
        a[i] = new int [n + 1];
        for(int j = 0; j < n; ++j)
            a[i][j] = 0;
    }
    a[0][2] = a[1][2] = a[2][2] = a[3][2] = 1;
    for (int i = 3; i <= n; ++i) {
        a[0][i] = a[2][i - 1];
        a[1][i] = a[0][i - 1] + a[2][i - 1];
        a[2][i] = a[1][i - 1] + a[3][i - 1];
        a[3][i] = a[1][i - 1] + a[3][i - 1];
    }

    std::cout << a[0][n] + a[1][n] + a[2][n] + a[3][n] << '\n';
    return 0;
}


