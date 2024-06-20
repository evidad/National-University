#include "main.hpp"

double pos_quadratic_form(int a, int b, int c)
{
    double under_sqrt = pow(b, 2) - (4*a*c);
    double square_root = sqrt(under_sqrt);
    double neg_b = b * -1;
    double division = a * 2;
    double positive = (neg_b + square_root)/division;
    return positive;
}

double neg_quadratic_form(int a, int b, int c)
{
    double under_sqrt = pow(b, 2) - (4*a*c);
    double square_root = sqrt(under_sqrt);
    double neg_b = b * -1;
    double division = a * 2;
    double negative = (neg_b - square_root)/division;
    return negative;
}

int main()
{
    int a, b, c;
    cout << "Enter three integers: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << pos_quadratic_form(a, b, c) << " " << neg_quadratic_form(a, b, c) << endl;
    return 0;
}