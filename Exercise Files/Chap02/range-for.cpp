// range-for.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };

    for(int i : array) { // array is a container, for each element of the container, it is set to the variable i
        printf("i is %d\n", i);
    }

    // With a string
    char s[] = "String";
    for (char c : s) {
        if (c == 0) break;
        printf("c is %c\n", c);
    }

    return 0;
}
