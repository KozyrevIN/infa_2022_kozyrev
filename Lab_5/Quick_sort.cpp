#include <iostream>
#include <random>
#include <chrono>
#include <fstream>

void quick_sort(int* data, unsigned int l_idx, unsigned int r_idx);

unsigned partition_by_number(int* data, unsigned l_idx, unsigned r_idx, unsigned pivot)
{
    while (true)
    {
        while (data[l_idx] < pivot) ++l_idx;
        while (pivot < data[r_idx]) --r_idx;

        if (r_idx <= l_idx)
            return r_idx;

        std::swap(data[l_idx++], data[r_idx--]);
    }
}

void quick_sort(int* data, unsigned int l_idx, unsigned int r_idx)
{
    if (l_idx >= r_idx)
        return;
    auto split_idx = partition_by_number(data, l_idx, r_idx, data[(r_idx + l_idx) / 2]);
    quick_sort(data, l_idx, split_idx);
    quick_sort(data, split_idx + 1, r_idx);
}

int main()
{
    std::uniform_int_distribution<> d(1, 14620);
    std::mt19937 gen;

    std::ofstream fout;
    fout.open ("execution_time.txt", std::ofstream::app);

    for (int size{1}; size < 20000; ++size)
    {
        int* m = new int[size];
        for (int i{0}; i < size; ++i)
            m[i] = d(gen);

        auto start = std::chrono::high_resolution_clock::now();
        quick_sort(m, 0, size - 1);
        auto stop = std::chrono::high_resolution_clock::now();

        auto duration = duration_cast<std::chrono::microseconds>(stop - start);
        fout << duration.count() << ", ";
        delete[] m;
    }

    fout.close();
}

