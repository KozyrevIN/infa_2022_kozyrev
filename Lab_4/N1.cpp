#include <iostream>

int main()
{
    long long storage;
    std::cin >> storage;
    long bytes{20};
    for (;storage > 0; storage /= 2, ++bytes);
    --bytes;
    bytes = bytes / 8 + (bytes % 8 > 0);
    std::cout << bytes;
}

