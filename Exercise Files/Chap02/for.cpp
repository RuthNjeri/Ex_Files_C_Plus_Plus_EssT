// for.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    char s[] = "string";

    for (char* pointer = s; *pointer != 0; ++pointer) {
        printf("element %c is ", *pointer);
    }

    for(int i = 0; i < 5; ++i) { // Syntax shortcut for a while loop.
        printf("element %d is %d\n", i, array[i]);
    }

    return 0;
}
