//Kozyrev Ivan
#include <list>
#include <iostream>

int main()
{
    std::list<int> lis;
    int n, m, input;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;
        lis.push_back(input);
    }
    std::cin >> m;

    bool f{true};
    while (f)
    {
        f = false;
        for (auto it = lis.begin(); it != lis.end(); ++it)
        {
            auto at = it;
            ++at;
            if (*(it) > *(at))
            {
                int temp = *(at);
                *at = *it;
                *it = temp;
                f = true;
            }
        }

    }

    auto it = lis.begin();
    std::advance(it, n - m);
    for (; it != lis.end(); ++it)
        std::cout << *it << ' ';
}

