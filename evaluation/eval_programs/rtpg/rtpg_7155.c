// RTPG_7155: vars=9 stmts=10
#include <stdlib.h>
void test_func(void) {
    int v2 = 4;
    int a18 = 43710;
    int dat55 = 26;
    int dat75 = 61400;
    int acc53 = 71;
    int cur34 = 9;
    int z60 = 0;
    int cnt39 = 14;
    int z3 = 32;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 94; i++) {
        dat55 = dat75 | z3;
        a18 = dat75 / cnt39;
        cur34 = acc53 + cnt39;
        z60 = dat55 | z60;
        z3 = cur34 ^ v2;
        v2 = a18 + a18;
        cur34 = v2 / a18;
        dat55 = cur34 & v2;
        cur34 = cur34 + 5;
        dat75 = cur34 ^ a18;
        darr[i] = dat55;
    }
    free(darr);
}
int main() { test_func(); return 0; }

