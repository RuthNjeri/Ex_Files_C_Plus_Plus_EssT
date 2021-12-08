// while.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int i = 0;
    
    while(i < 5) { // Loop control, controls the execution of the loop
        if (i == 2) {
            ++i;
            continue; // skips the rest of the loop but still continues.
        }
        //if (i == 3) break; // You can break out of a loop prematurely. You do not need curly braces if it is only one statement in a block.
        printf("element %d is %d\n", i, array[i]);
        ++i;
    }

    //do { 
    //    printf("element %d is %d\n", i, array[i]);
    //    ++i;
    //} while (i < 5);// The test is at the bottom
    
    return 0;
}
