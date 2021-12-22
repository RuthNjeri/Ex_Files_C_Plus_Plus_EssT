// array.cpp by Bill Weinman [bw.org]
// updated 2020-07-07
#include <cstdio>

int main()
{
    int array[] = { 1, 2, 3, 4, 5 };
    int x = array[2];

    printf("x is %d\n", x);

    // Array elements may be accessed as if the array was a pointer
    // Pointers are strongly typed and know the size of the type you are pointing to
    *array = 6;
    
    printf("%d", array[0]);

    // Assigns the address of the array to the pointer. You do not need the address operator because the array may be accessed as if it were a pointer

    int* ip = array;
    *(++ip) = 7;

    //*ip = 2;


    array[2] = 47;

    for(int i : array) {
        printf("%d ", i);
    }
    puts("");
    return 0;
}
