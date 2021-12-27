// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>


void func()
{
    puts("This is func()");
}



int main()
{
    puts("this is main()");
    void(*pfunc)() = func; // Function pointer
    (*pfunc)();
    pfunc();// Ambiguous and not recommended, it is better to show that you are calling a function pointer
    return 0;
}
