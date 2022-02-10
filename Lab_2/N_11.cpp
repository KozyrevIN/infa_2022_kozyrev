#include <iostream>
using namespace std;

unsigned int get_a_hexadecimal()
{
    string hex;
    unsigned int decimal{0};
    cin >> hex;
    for (char h_digit : hex)
    {
        if ('0' <= h_digit && h_digit <= '9')
            decimal = 16 * decimal + h_digit - '0';
        else if ('A' <= h_digit && h_digit <= 'F')
            decimal = 16 * decimal + 10 + h_digit - 'A';
        else
            return 0;
    }
    return decimal;
}

int main()
{
    cout << get_a_hexadecimal() << endl;
    return 0;
}
