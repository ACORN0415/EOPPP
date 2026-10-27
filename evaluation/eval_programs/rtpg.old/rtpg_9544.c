// RTPG_9544: vars=7 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int v58 = 10;
    int acc38 = 6;
    int z69 = 7;
    int prev8 = 36;
    int z3 = 6;
    int a32 = 54667;
    int x19 = 22;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        z69 = xn[i];
        prev8 = acc38 - 34;
        acc38 = acc38 + 4;
        v58 = prev8;
        z3 = z3 + 5;
        v58 = prev8 + 21;
        z3 = z69 - a32;
        x19 = v58 - a32;
        a32 = z3 + z69;
        darr[i] = x19;
        yo[i] = x19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

