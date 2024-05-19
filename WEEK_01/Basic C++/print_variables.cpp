#include <iostream>

int main()
{
    int a = 45;
    float b = 34.5346;
    double c = 43.54013873902048;
    char d = 'S';
    // char e[101] = 'Sabbir'; //why it do not  print?

    std::cout << a << std::endl;
    std::cout << "a = " << a << std::endl //used std:endl isntead of \n, both are allowed
              << "b = " << b << std::endl
              << "c = " << c << std::endl
              << "d = " << d << std::endl;
    std::cout << "My first variable in C++ is a = " << a;

    return 0;
}