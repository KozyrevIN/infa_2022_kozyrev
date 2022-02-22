#include <iostream>

int* copyarr(int* a, unsigned int size)
{
    int* copy_arr = new int[size];
    for (int i{0}; i < size; ++i)
        copy_arr[i] = a[i];
    return copy_arr;
}

int main()
{
    int arr[100] {0};
    arr[13] = 6;
    int* ptrcopy;
    ptrcopy = copyarr(&arr[0], 100);
    std::cout<< ptrcopy[13];
}