#include <iostream>

int main()
{
    int arr[1000];
    int n;
    std::cin >> n;
    for (int i{0}; i<n; ++i)
        std::cin >> arr[i];

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

    int sep{0};
    for(; sep<n && arr[sep] < 0; ++sep);
    for (int i{sep}; i<n; ++i)
        if (i == 0 || arr[i] != arr[i-1])
            std::cout << arr[i] << ' ';
    for (int i{sep-1}; i >= 0; --i)
        if (i == 0 || arr[i] != arr[i+1])
            std::cout << arr[i] << ' ';
}

