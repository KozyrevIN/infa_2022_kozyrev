#include <list>
#include <iostream>
#include <string>


int main()
{
    int n;
    std::cin >> n;
    std::list<int> m;
    std::list<int> spisok = {1, 2, 3, 4};
    int input;
    for(int i = 0; i < n; ++i)
    {
        std::cin >> input;
        m.push_back(input);
    }
    std::list<int>::iterator it;
    for(it = m.begin(); it != m.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
    m.pop_front();
    m.pop_back();
    m.push_back(3782);
    std::advance(it, 2);
    m.insert(it, 3782);
    m.unique();
    for(it = m.begin(); it != m.end(); ++it)
        std::cout << *it << ' ';
    std::cout << '\n';
    m.merge(spisok);
    for(it = m.begin(); it != m.end(); ++it)
        std::cout << *it << ' ';
    m.erase(std::min_element(m.begin(), m.end()), std::max_element(m.begin(), m.end()));
    m.remove(1);
}

