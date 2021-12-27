// recursive-factorial.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

//unsigned long int factorial( unsigned long int n ) {
//    if( n < 2 ) return 1;
//    return n * factorial( n - 1 );
//}

unsigned long int factorial(unsigned long int n){
    unsigned long int result = 1;
    
    for(int i = 2; i <= n; ++i){
        result *= i;
    }
    
    return result;
}

int main() {
    unsigned long int n = 5;
    printf("Factorial of %ld is %ld\n", n, factorial(n));
    return 0;
}
