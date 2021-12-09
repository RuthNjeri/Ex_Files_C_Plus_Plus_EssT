// 02_challenge.cpp by Bill Weinman [bw.org]
// updated 2020-07-12
#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;
    int count2 = 0;
    int count3 = 0;

    // Range based for loop. can be int s or char s
    for(int s: string ) 
    {
        if (s == 0) break;
        ++count;
    }

    // Solution 2, bodyless for loop
    for (count2 = 0; string[count2]; ++count2); // When the string gets to 0 it will break out of the loop

    // Solution 3
    count3 = 0; // Tested that you do not need to initialize
    while (string[count3])
    {
        ++count3;
    }

    printf("The number of characters is: %d\n", count);
    printf("The number of characters is: %d\n", count2);
    printf("The number of characters is: %d\n", count3);

    return 0;
}
