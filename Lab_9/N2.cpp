//Kozyrev Ivan
#include <list>
#include <iostream>

int main()
{
    std::list<int> m;
    int n; int input;
    double mean = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;
        mean += input;
        m.push_back(input);
    }
    for (auto i : m)
        if (n * i > mean)
            std::cout << i << ' ';
}

