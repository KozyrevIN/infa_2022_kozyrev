#include <iostream>

struct Vector{
    int x, y, z;
};
Vector sum(Vector a, Vector b)
{
    return Vector {a.x+b.x,a.y+b.y,a.z+b.z};
}

int main()
{
    int x, y, z;
    std::cin >> x >> y >> z;
    Vector a {x, y, z};
    std::cin >> x >> y >> z;
    Vector b {x, y, z};
    Vector c {0, 0, 0};
    c = sum(a, b);
    std::cout << c.x << ' ' << c.y << ' ' << c.z << '\n';
}