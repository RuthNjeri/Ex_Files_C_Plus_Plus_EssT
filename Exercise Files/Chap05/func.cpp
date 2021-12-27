// func.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include "func.h"



int main()
{
    puts("this is main()");
    func();
    func();
    func();
    func();
    func();
    return 0;
}

void func()
{
    static int i = 5; // Default is automatic storage, which is stored in a stack and is temporary. Static stores the value in the main memory pool not the stack. The value is carried forward each time.
    // Automatic storage is not recommended for larger objects.
    printf("i is %d\n", i++);
}

// C++ by default passes by value when using parameters in a func
// The values are usually stored in a stack.
// Pass by reference using a reference operator(const qualified) or pointer for objects like strings
// This is a preferred standard than storing it inside a stack

