#include <iostream>

int main()
{
    int arr[100][100];
    int n, m;
    std::cin >> n >> m;
    for (int i{0}; i<n; ++i)
        for (int j{0}; j<m; ++j)
            std::cin >> arr[i][j];

    int max{0}, num_max{0};
    for (int j{0}; j<m; ++j)
        max += arr[0][j];
    for (int j{0}; j<m; ++j)
    {
        int tmp{0};
        for (int i{0}; i<n; ++i)
            tmp += arr[i][j];
        if (tmp > max)
        {
            max = tmp;
            num_max = j;
        }
    }
    std::cout << num_max;
}

