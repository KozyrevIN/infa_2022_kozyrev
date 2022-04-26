//Ivan Kozyrev
#include <iostream>
#include <algorithm>

void change(int* nominal, int sum, int n)
{
    std::cout << nominal[n-1] << ": " << sum / nominal[n-1] << '\n';
    if(n > 1)
        change(nominal, sum % nominal[n-1], n-1);
}

int main()
{
    int sum, amount;
    std::cin >> amount; //Amount of different nominal
    auto nominal = new int [amount];
    for(int i = 0; i < amount; ++i)
        std::cin >> nominal[i];
    std::sort(nominal, nominal + amount);
    std::cin >> sum;
    change(nominal, sum, amount);
    delete[] nominal;
}


