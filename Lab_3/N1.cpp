#include <iostream>

int main()
{
    int m[1000];
    int n;
    std::cin >> n;
    for (int i{0}; i<n; ++i)
        std::cin >> m[i];
    for (int i{n-1}; i>=0; --i)
        std::cout << m[i] << ' ';
}

