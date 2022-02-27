# REGISTER_OSTREAM
A simple macro for overloading ostream operator in classes

[Show in action](https://godbolt.org/z/n1oMrsMd6)

```C++
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
```
