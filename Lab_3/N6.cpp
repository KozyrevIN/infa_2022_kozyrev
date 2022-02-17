#include <iostream>

int main()
{
    int arr[1000];
    int n, m;
    std::cin >> n;
    for (int i{0}; i<n; ++i)
       std::cin >> arr[i];
    std::cin >> m;

    bool f{true};
    while (f)
    {
        f = false;
        for (int j{0}; j < n-1; ++j)
            if (arr[j] > arr[j+1])
            {
                std::swap(arr[j], arr[j+1]);
                f = true;
            }
    }

    for (int i{n-m}; i<n; ++i)
    {
        std::cout << arr[i] << ' ';
    }
}

