//Ivan Kozyrev
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    auto m = new int [n];
    auto res = new int [n];
    for(int i = 0; i < n; ++i)
        std::cin >> m[i];

    int max_length = 1;
    for(int i = 0; i < n; ++i)
    {
        res[i] = 1;
        for(int j = 0; j < i; ++j)
            if((m[j] < m[i]) && (res[j] >= res[i]))
                res[i] = res[j] + 1;
        if(res[i] > max_length)
            max_length = res[i];
    }

    std::cout << max_length;
    delete[] m; delete[] res;
}



