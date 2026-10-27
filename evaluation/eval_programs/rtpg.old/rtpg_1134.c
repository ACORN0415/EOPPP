// RTPG_1134: vars=9 stmts=3
#include <stdlib.h>
void test_func(void) {
    int x47 = 63;
    int cnt98 = -28;
    int cur31 = 53;
    int lo75 = 17;
    int prev77 = -34;
    int hi44 = 4;
    int dat7 = 0;
    int x99 = 40;
    int lo7 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        dat7 = dat7;
        lo7 = x99;
        hi44 = hi44 + 3;
        darr[i] = x99;
    }
    free(darr);
}
int main() { test_func(); return 0; }

