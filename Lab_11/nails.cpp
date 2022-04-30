#include <iostream>
#include <algorithm>
#include <string>

int main()
{
    std::string data;
    auto nails = new int [100]; auto res = new int [100]; int counter = 0;
    std::getline(std::cin, data);
    {
        int i = 0;
        int j = 1;
        while (i < data.length() - 1)
        {
            for (; j < data.length() && data[j] != ' '; ++j);
            nails[counter] = std::stoi(data.substr(i, j - i));
            i = j;
            ++counter;
            ++j;
        }
    }
    std::sort(nails, nails + counter);
    res[0] = INT32_MAX; res[1] = nails[1] - nails[0];
    for(int i = 2; i < counter; ++i)
        res[i] = std::min(res[i - 1], res[i - 2]) + nails[i] - nails[i - 1];
    std::cout << res[counter - 1];
    delete[] nails; delete[] res;
}
