#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string data;
    auto nails = new int [100]; auto res = new int [100];
    int i = 0; int j = 1;
    while(i < data.length())
    {
        while(j != ' ' && j < data.length)
    }
    std::sort(nails, nails + n);
    res[0] = INT32_MAX; res[1] = nails[1] - nails[0];
    for(int i = 2; i < n; ++i)
        res[i] = std::min(res[i - 1], res[i - 2]) + nails[i] - nails[i - 1];
    for(int i = 0; i < n; ++i)
        std::cout << res[i] << ' ';
    std::cout << res[n - 1];
    delete[] nails; delete[] res;
}
