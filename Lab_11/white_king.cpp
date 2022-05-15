//Ivan Kozyrev
#include <iostream>
#include <string>

int main()
{
    std::string pos;
    int board [8][8] {{0}};
    int res [8][8] {{0}};
    std::cin >> pos;
    int x = static_cast<int>(pos[1]) - static_cast<int>('1');
    int y = static_cast<int>(pos[0]) - static_cast<int>('a');
    board[x][y] = 1;
    if(x + 2 < 8)
    {
        if(y + 1 < 8)
            board[x+2][y+1] = 1;
        if(y - 1 >= 0)
            board[x+2][y-1] = 1;
    }
    if(x - 2 >= 0)
    {
        if(y + 1 < 8)
            board[x-2][y+1] = 1;
        if(y - 1 >= 0)
            board[x-2][y-1] = 1;
    }
    if(y + 2 < 8)
    {
        if(x + 1 < 8)
            board[x+1][y+2] = 1;
        if(x - 1 >= 0)
            board[x-1][y+2] = 1;
    }
    if(y - 2 >= 0)
    {
        if(x + 1 < 8)
            board[x+1][y-2] = 1;
        if(x - 1 >= 0)
            board[x-1][y-2] = 1;
    }
    res[0][0] = 1;

    for(int i = 0; i < 8; ++i)
        for(int j = 0; j < 8; ++j)
            if(!(board[i][j]))
            {
                if(i - 1 >= 0)
                    res[i][j] += res[i - 1][j];
                if(j - 1 >= 0)
                    res[i][j] += res[i][j - 1];
                if(i - 1 >= 0 && j - 1 >= 0)
                    res[i][j] += res[i - 1][j - 1];
            }

    std::cout << res[7][7];
}

