#include <iostream>
using namespace std;

unsigned long get_really_any_hexadecimal()
{
    string hex;
    unsigned int decimal;
    cin >> hex;
    for (char h_digit : hex)
    {
        if ('0' <= h_digit && h_digit <= '9')
            decimal = 16 * decimal + h_digit - '0';
        else if ('A' <= h_digit && h_digit <= 'F')
            decimal = 16 * decimal + 10 + h_digit - 'A';
    }
    return decimal;
}

int main()
{
    cout <<get_really_any_hexadecimal() <<endl;
    return 0;
}

