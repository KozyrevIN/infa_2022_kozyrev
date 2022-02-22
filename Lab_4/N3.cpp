#include <iostream>

bool do_some_work(int *a, int *b)
{
    *a = *a + *b;
    if (*a > *b)
        return true;
    return false;
}

int main()
{
    int a, b;
    std::cin >> a >> b;
    if (do_some_work(&a, &b))
        std::cout << a-b;
    else
        std::cout << a+b;
}