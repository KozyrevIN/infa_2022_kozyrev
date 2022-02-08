#include <iostream>
using namespace std;

char leveling(char c)
{
    if ('a' <= c && c <= 'z')
        return char (c + 'A' - 'a');
    else
        return c;
}

int main()
{
    char c;
    do
    {
        cin.get(c);
        cout <<leveling(c);
    } while (c != '\n');
    cout <<endl;
    return 0;
}

