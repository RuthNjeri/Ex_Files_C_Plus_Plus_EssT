// working.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>

const int & f(const int & i){
    return i;
}


int main()
{
    int i = 5;
    printf("f(i) is %d\n", i);
    
    return 0;
}
