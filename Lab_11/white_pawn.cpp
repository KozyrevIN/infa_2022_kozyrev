//Ivan Kozyrev
#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;
    std::string pos;

    int board [8][8] {{0}};
    int res [8][8] {{0}};
    for(int i = 0; i < n; ++i)
    {
        std::cin >> pos;
        board[static_cast<int>(pos[1]) - static_cast<int>('1')][static_cast<int>(pos[0]) - static_cast<int>('a')] = 1;
    }
    std::cin >> pos;
    res[static_cast<int>(pos[1]) - static_cast<int>('1')][static_cast<int>(pos[0]) - static_cast<int>('a')] = 1;

    for(int i = static_cast<int>(pos[1]) - static_cast<int>('0'); i < 8; ++i)
        for(int j = 0; j < 8; ++j)
        {
            if((j >= 1) && board[i][j])
                res[i][j] += res[i-1][j-1];
            if((j <= 6) && board[i][j])
                res[i][j] += res[i-1][j+1];
            if(!(board[i][j]))
                res[i][j] += res[i-1][j];
        }

    int sum = 0;
    for(int j = 0; j < 8; ++j)
        sum += res[7][j];
    std::cout << sum;
}
