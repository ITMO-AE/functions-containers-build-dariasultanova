#include <iostream>

int factorial(int x)
{
    if (x <= 0)
        return 1;
    else
        return x * factorial(x - 1);
}

int main()
{
    int a = 7;
    int b = -5;
    std::cout << factorial(a) << std::endl;
    std::cout << factorial(b) << std::endl;
    return 0;
}
