// working.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{   // Primitive string is a collection of strings terminated by a 0
    char s[] = "String"; // same as char s[] = {'S', 't', 'r', 'i', 'n', 'g', 0};
    printf("s is %s\n", s);

    for(int i = 0; s[i] != 0; ++i) {
        printf("char is %c\n", s[i]);
    }

    // The above can also be done by pointers
    for (char* cp = s; *cp != 0; ++cp) {
        printf("char is %c\n", *cp);
    }


    return 0;
}
