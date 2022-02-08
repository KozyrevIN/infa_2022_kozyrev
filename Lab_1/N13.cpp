/********************\
|Козырев Иван Б02-102|
\********************/


#include <iostream>


int find_lkm(int a, int b) {
    int prod{a * b};
    for (; a % b != 0; a %= b)
        if (b > a)
            std::swap(a, b);
    return prod / b;
}

int main() {
    int a, b, c, lkm;
    std::cout << "Enter 3 numbers" << "\n";
    std::cin >> a >> b >> c;
    lkm = find_lkm(a, b);
    lkm = find_lkm(lkm, c);
    std::cout << lkm;
}

