// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

template <typename T>
// non-recursive factorial
 T factorial(T n) {
    unsigned long int rc = n;

    // the product of all numbers 2 through n
    while (n > 1) {
        rc *= --n;
    }

    return rc;
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}