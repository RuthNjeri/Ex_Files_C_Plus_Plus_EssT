// pointer-incr.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <cstdint>

void printp(uint32_t *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    uint32_t arr[5] = { 1, 2, 3, 4, 5 };
    uint32_t *p = arr;
    printp(++p); // pre increment is slightly more efficient than post increment, post increment has to make a copy of the value then increment it.
    printp(p++);
    printp(p++);

    return 0;
}
