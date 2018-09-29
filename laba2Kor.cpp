#include <iostream>
#include <cmath>
int f1(int t)
{
    int r = t/100000;
    return r % 10;
}
bool f2 (int a)
{
    return a/100 == 6;
}
bool f3(int b)
{
    return b % 7 == 0;
}
double f5(double x)
{
double num1 = (3-4*cos(2*x) + cos(4*x))/8;
double num2 = (pow(sin(x), 4)) / pow(sin(x),2) + pow(cos(x), 2);
return num1*num2;
}

int main()
{
    int res1 = f1(19963263);
    std::cout<< res1 << std::endl;
    bool res2 = f2(655);
    std::cout << res2 << std::endl;
    bool res3 = f3(14);
    std::cout << res3 << std::endl;
    double res5 = f5(68965);
    std::cout << res5 << std::endl;
    return 0;
}

