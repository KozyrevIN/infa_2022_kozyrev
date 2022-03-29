#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    int sum{0};
    int average;
    for(int i{0}; i < n; ++i)
    {
        std::cin >> v[i];
        sum += v[i];
    }
    average = sum / n;

    unsigned count{0};
    std::vector<int> idx(n);
    for(int i{0}; i < n; ++i)
        idx[i] = -1;
    for(int i{0}; i < n; ++i)
        if (v[i] > average)
        {
            idx[count] = i;
            ++count;
        }

    std::cout << count << '\n';
    for(int i{0}; idx[i] != -1; ++i)
    {
        std::cout << idx[i] << ' ';
    }
}
