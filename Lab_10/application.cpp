//Ivan Kozyrev
#include <iostream>
#include <algorithm>
#include <list>

struct Work
{
    int start, end;
};

bool comp(Work a, Work b)
{
    return a.end < b.end;
}

int main()
{
    Work arr[] = {{1, 2}, {3,6}, {3, 4}, {5, 7}, {10, 16}};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::sort(arr, arr + n, comp);
    auto result = new int [n];
    for(int i = 1; i < n; ++i)
    {

    }
    int i = 1;
    for(auto it = result.begin(); it != result.end(); ++it, ++i)
    {
        std::cout << i << ". start: " << (*it).start << " end: " << (*it).end << '\n';
    }

}

