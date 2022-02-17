#include <iostream>

struct Protoss {
    unsigned long long int id;
    unsigned int health, shield, position[2];
    char name[100];
};

unsigned int count_wounded(Protoss *army, unsigned int n, unsigned int
threshold)
{
    int wounded{0};
    for (int i{0}; i<n; ++i)
    {
        std::cout << army[i].name << '\n';
        if (army[i].health < threshold)
            ++wounded;
    }
    return wounded;
}

int main()
{
    Protoss army[10];
    for (int i=0; i<10; i++)
    {
        army[i].id = i;
        std::cin >>army[i].health >>army[i].shield >>army[i].position[0]
            >>army[i].position[1] >>army[i].name;
    }
    std::cout <<count_wounded(army, 10, 100);
    std::cout <<std::endl;
    return 0;
}

