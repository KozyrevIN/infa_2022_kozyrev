//Kozyrev Ivan B02-102

#include <iostream>
#include <cmath>

double rectangle(const double funk[], unsigned n, double delta)
{
    double sum = 0; double reminder = 0;
    double main;  double tmp;
    for(int i = 0; i < n - 1; ++i)
    {
        main = funk[2*i + 1] - reminder;
        tmp = sum + main;
        reminder = (tmp - sum) - main;
        sum = tmp;
    }
    return sum * delta;
}

double trapezoid(const double funk[], unsigned n, double delta)
{
    double sum = 0; double reminder = 0;
    double main;  double tmp;
    for(int i = 0; i < n - 1; ++i)
    {
        main = (funk[2*i] + funk[2*i + 2])/2 - reminder;
        tmp = sum + main;
        reminder = (tmp - sum) - main;
        sum = tmp;
    }
    return sum * delta;
}

double parabola(const double funk[], unsigned n, double delta)
{
    double sum = 0; double reminder = 0;
    double main;  double tmp;
    for(int i = 0; i < n - 1; ++i)
    {
        main = (funk[2*i] + 4*funk[2*i+1] + funk[2*i+2])/6 - reminder;
        tmp = sum + main;
        reminder = (tmp - sum) - main;
        sum = tmp;
    }
    return sum * delta;
}

int main()
{
    double a, b;
    unsigned n;
    std::cin >> a >> b >> n;
    unsigned steps = 2 * n - 1; double delta = (b - a) / steps;
    auto sin = new double[steps];
    auto square = new double[steps];
    auto logarithm = new double[steps];
    for(int i = 1; i < 2*n - 1; ++i)
    {
        sin[i] = std::sin(a * (steps - i) / steps + b * i / steps );
        square[i] = (a * (steps - i) / steps + b * i / steps ) * (a * (steps - i) / steps + b * i / steps );
        logarithm[i] = std::log(a * (steps - i) / steps + b * i / steps );
    }

    std::cout << "Rectangle method" << '\n'
              << "sin: " << rectangle(sin, n, delta) << ' '
              << "square: " << rectangle(square, n, delta) << ' '
              << "logarithm: " << rectangle(logarithm, n, delta) << '\n';
    std::cout << "Trapezoid method" << '\n'
              << "sin: " << trapezoid(sin, n, delta) << ' '
              << "square: " << trapezoid(square, n, delta) << ' '
              << "logarithm: " << trapezoid(logarithm, n, delta) << '\n';
    std::cout << "Parabola method" << '\n'
              << "sin: " << parabola(sin, n, delta) << ' '
              << "square: " << parabola(square, n, delta) << ' '
              << "logarithm: " << parabola(logarithm, n, delta) << '\n';

    delete[] sin;
    delete[] square;
    delete[] logarithm;
}

