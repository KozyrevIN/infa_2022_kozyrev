#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    auto m = new int [n]; auto res = new int [n];
    for(int i = 0; i < n; ++i)
        std::cin >> m[i];

    res[0] = 0; res[1] = std::abs(m[1]-m[0]);
    for(int i = 2; i < n; ++i)
        res[i] = std::min(res[i-1] + std::abs(m[i] - m[i-1]), res[i-2] + 3*std::abs(m[i] - m[i-2]));
    std::cout << res[n-1];
    delete[] m; delete[] res;
}

