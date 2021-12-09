// func.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int func(int i, const char * s)
{
    printf("this is func(%i, %s)\n", i, s);
    return i * 2;
}

int main()
{
    puts("this is main()");
    int x = func(8, "string");
    printf("x is %d\n", x);
    return 0;
}

