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

    lis.reverse();
    while(lis.size() > m)
        lis.erase(std::min_element(lis.begin(), lis.end()));
    lis.reverse();

    for(auto i : lis)
        std::cout << i << ' ';
}
