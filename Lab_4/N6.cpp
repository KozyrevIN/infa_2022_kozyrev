#include <iostream>

int** transpose(int** matrix, unsigned int N, unsigned int M)
{
    int** tranmat = new int* [M];
    for (int i{0}; i < M; ++i)
        tranmat[i] = new int [N];

    for (int i{0}; i<M; ++i)
        for (int j{0}; j<N; ++j)
            tranmat[i][j] = matrix[j][i];

    return tranmat;
}

int main()
{
    int N, M;
    std::cin >> N >> M;
    int** mat = new int* [N];
    for (int i{0}; i < N; ++i)
        mat[i] = new int [M];

    for (int i{0}; i<N; ++i)
        for (int j{0}; j<M; ++j)
            std::cin >> mat[i][j];

    int** tranmat;
    tranmat = transpose(mat, N, M);

    for (int i{0}; i<M; ++i)
    {
        for (int j{0}; j<N; ++j)
            std::cout << tranmat[i][j] << ' ';
        std::cout << '\n';
    }
}