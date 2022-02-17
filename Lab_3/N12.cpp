#include <iostream>

struct box
{
    unsigned int cost;
    unsigned int sweets;
};

int main()
{
    box arr[1000];
    int n;
    unsigned int money;
    std::cin >> n;
    for (int i{0}; i<n; ++i)
        std::cin >> arr[i].cost >> arr[i].sweets;
    std::cin >> money;

    bool f{true};
    while (f)
    {
        f = false;
        for (int j{0}; j < n-1; ++j)
            if (arr[j].cost > arr[j+1].cost)
            {
                std::swap(arr[j], arr[j+1]);
                f = true;
            }
    }

    f = true;
    unsigned int box_count{0}, sweets_count{0};
    for (int i{0}; f; ++i)
    {
        if (money >= arr[i].cost)
        {
            money -= arr[i].cost;
            ++box_count;
            sweets_count += arr[i].sweets;
        }
        else
            f = false;
    }

    std::cout << box_count << ' ' << sweets_count;

}
