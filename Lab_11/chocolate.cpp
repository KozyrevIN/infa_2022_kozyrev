//Козырев Иван
#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    if (n % 2 == 1)
    {
        std::cout << '0';
    }

    auto count = new int [n / 2 + 1];
    count[0] = 1;
    for (int i = 1; i <= n / 2; ++i)
    {
        count[i] = count[i - 1] + 2;
        for (int j = i - 1; j > 0; --j)
            count[i] += count[j] * 2;
    }
    std::cout << count[n / 2] << '\n';
    delete [] count;
    return 0;
}
