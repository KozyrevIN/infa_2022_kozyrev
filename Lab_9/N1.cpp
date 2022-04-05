//Kozyrev Ivan
#include <list>
#include <iostream>

int main()
{
    std::list<int> m;
    int n; int input;
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        std::cin >> input;
        m.push_back(input);
    }
    for (auto it = --m.end(); it != --m.begin(); --it)
        std::cout << *it << ' ';
}

