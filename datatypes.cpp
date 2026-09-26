#include <iostream>

// namespace allows two variables with same name as long as they dont share the namespace
namespace test
{
    float f = 82.2;
}
namespace trial
{
    int a = 25;
}
namespace trial1
{
    int f = 12345;
}
int main()
{
    using namespace trial1;
    // const makes a variable unchangable
    const int a = 15;
    float b = 15.5;
    double c = 15.4;
    char d = 'C';
    std::string e = "name";
    bool x = true;
    std::cout << a << '\n';
    std::cout << trial::a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    std::cout << e << '\n';
    std::cout << f << '\n';
    if (x)
    {
        std::cout << "my " << e << " is mark";
    }

    return 0;
}