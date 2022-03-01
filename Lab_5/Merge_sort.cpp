#include <iostream>
#include <random>
#include <chrono>
#include <fstream>

void merge(int* m, unsigned l_idx, unsigned split_idx, unsigned r_idx)
{
    ++split_idx;
    while ((split_idx <= r_idx) && (l_idx <= split_idx))
    {
        if (m[l_idx] > m[split_idx])
        {
            int tmp{m[split_idx]};
            for (unsigned i{l_idx}; i < split_idx; ++i)
                m[i+1] = m[i];
            m[l_idx] = tmp;
            ++l_idx;
            ++split_idx;
        }
        else
            ++l_idx;
    }
}

void merge_sort(int* m, unsigned l_idx, unsigned r_idx)
{
    if (l_idx >= r_idx)
        return;
    unsigned split_idx{(l_idx + r_idx) / 2};

    //std::cout << l_idx << ' ' << split_idx << ' ' << r_idx << '\n';
    merge_sort(m, l_idx, split_idx);
    merge_sort(m, split_idx + 1, r_idx);

    merge(m, l_idx, split_idx, r_idx);
}

int main()
{
    std::uniform_int_distribution<> d(1, 14620);
    std::mt19937 gen;

    std::ofstream fout;
    fout.open ("execution_time.txt", std::ofstream::app);

    for (int size{1}; size < 10000; ++size)
    {
        int* m = new int[size];
        for (int i{0}; i < size; ++i)
            m[i] = d(gen);

        auto start = std::chrono::high_resolution_clock::now();
        merge_sort(m, 0, size - 1);
        auto stop = std::chrono::high_resolution_clock::now();

        auto duration = duration_cast<std::chrono::microseconds>(stop - start);
        fout << duration.count() << ", ";
        delete[] m;
    }

    fout.close();
}

