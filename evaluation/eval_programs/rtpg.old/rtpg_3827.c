// RTPG_3827: vars=10 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int val76 = -28;
    int y86 = 58;
    int c13 = 23;
    int a89 = 35461;
    int dat84 = 6;
    int dat7 = 27671;
    int v60 = 1;
    int z12 = 63838;
    int z22 = 42;
    int dat44 = 14;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        val76 = xn[i];
        z12 = z12;
        c13 = z22;
        z12 = dat7 + dat44;
        val76 = z22 + c13;
        c13 = c13 - 4;
        darr[i] = v60;
        if (z22 <= 10) {
        dat7 = dat7 - 29257;
        }
        yo[i] = dat7;
    }
    free(darr);
}
int main() { test_func(); return 0; }

