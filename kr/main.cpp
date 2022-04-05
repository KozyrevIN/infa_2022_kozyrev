#include <iostream>

using std::cout;
using std::endl;

const unsigned int N = 5;
const int left[N]  = {5, 4, 3, 2, 1}; // command code 1
const int right[N] = {1, 2, 3, 4, 5}; // command code 2
const int back[N]  = {1, 1, 1, 1, 1}; // command code 3
const int meow[N]  = {3, 2, 3, 2, 5}; // command code 4

void recognize(int* data_start, int* data_end, int* command, int** frame)
{
    for (auto i = data_start; i < data_end - N + 1; ++i) {
        int errors[4] = {0};
        for (int j = 0; j < N; ++j)
        {
            errors[0] += abs(left[j] - *(i + j));
            errors[1] += abs(right[j] - *(i + j));
            errors[2] += abs(back[j] - *(i + j));
            errors[3] += abs(meow[j] - *(i + j));
        }

        for(int k = 0; k < 4; ++k)
        {
            if (!(errors[k])) {
                *command = k+1;
                *frame = i;
                return;
            }
        }
    }
    *command = 0;
    *frame = nullptr;
}

int main()
{
    const int L = 21;
    int mindstream[L] = {3, 2, 3, 2, 5, 2, 3, 8, 3, 2, 1, 1, 1, 1, 1, 1, 1, 2, 3, 4, 5};
    int command = -1;
    int* frame = mindstream;
    int* end = mindstream + L;
    while (command)
    {
        recognize(frame, end, &command, &frame);
        if (!command) break;
        switch(command)
        {
            case 1:
                cout << "left ";
                break;
            case 2:
                cout << "right ";
                break;
            case 3:
                cout << "back ";
                break;
            case 4:
                cout << "MEOOOOW ";
                break;
        }
        frame += N;
    }
    cout << endl;
    return 0;
}