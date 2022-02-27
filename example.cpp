#include <iostream>
#include "utils/register_ostream.hpp"

class MyClass
{
    REGISTER_OSTREAM(MyClass, i, d, s);
    int i = 31;
    double d = 31.31;
    const char* s = "Hello world";
};


int main()
{
    MyClass s;

    std::cout << s << std::endl; // MyClass: { i:31, d:31.31, s:Hello world }
}
