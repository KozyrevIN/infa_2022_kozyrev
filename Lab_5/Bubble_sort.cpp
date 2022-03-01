#include <iostream>
#include <random>
#include <chrono>
#include <fstream>

void bubble_sort(int* m, unsigned stop)
{
    --stop;
    bool flag{true};
    for (;flag; /*--stop*/)
    {
        flag = false;
        for (int i{0}; i < stop; ++i)
            if (m[i] > m[i+1])
            {
                std::swap(m[i], m[i+1]);
                flag = true;
            }
    }

}

int main()
{
    std::uniform_int_distribution<> d(1, 14620);
    std::mt19937 gen;

    std::ofstream fout;
    fout.open ("execution_time.txt", std::ofstream::app);

    for (int size{1}; size < 6000; ++size)
    {
        int* m = new int[size];
        for (int i{0}; i < size; ++i)
            m[i] = d(gen);

        auto start = std::chrono::high_resolution_clock::now();
        bubble_sort(m, size);
        auto stop = std::chrono::high_resolution_clock::now();

        auto duration = duration_cast<std::chrono::microseconds>(stop - start);
        fout << duration.count() << ", ";
        delete[] m;
    }

    fout.close();
}
