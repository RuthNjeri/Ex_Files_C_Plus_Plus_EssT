// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <string>


const std::string & func()
{
    const static std::string s = "this is from func"; // do not want to store in a stack, use static, always use static for anything being returned by reference, and const unless you want to change the value
    return s;
}



int main()
{
    puts("this is main()");
    const std::string s = func();
    printf("s is %s\n", s.c_str()); // Returned by reference, by default and for small items it is returned by reference.
    return 0;
}
