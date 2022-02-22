#include <iostream>

struct something {
    int a;
    bool b;
    char c;
};

struct something* calc_adress(struct something *start, unsigned int number)
{
    start += number;
    return start;
}

int main()
{
    something arr[100];
    arr[5].a = 4;
    something *ptrnum;
    ptrnum = calc_adress(&arr[0], 5);
    std::cout << sizeof(*ptrnum) << '\n';
    std::cout << calc_adress(&arr[0], 0) << '\n';
    std::cout << calc_adress(&arr[0], 1) << '\n';
    std::cout << calc_adress(&arr[0], 2) << '\n';
    std::cout << calc_adress(&arr[0], 3) << '\n';
    std::cout << ptrnum << '\n';
    std::cout << (*ptrnum).a;
}

