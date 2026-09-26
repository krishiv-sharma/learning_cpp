#include <iostream>
// typedef used for big data types, using does the name tast and is used more
typedef int o;
using w = std::string;
int main()
{
    using std::cout;
    o x = 15;
    w y = "using using";
    cout << x << '\n';
    cout << y;
    return 0;
}