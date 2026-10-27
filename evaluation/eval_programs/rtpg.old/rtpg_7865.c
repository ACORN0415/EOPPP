// RTPG_7865: vars=16 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int hi88 = 34943;
    int c5 = 49986;
    int hi86 = 53019;
    int c33 = 10;
    int b3 = 50242;
    int dat49 = 88;
    int dat19 = 7310;
    int y68 = -33;
    int c59 = 1;
    int z60 = 77;
    int out95 = 34;
    int cur3 = 12;
    int c15 = 12;
    int x53 = 18038;
    int v70 = 17513;
    int a14 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 3;
    int sv0 = 0;
    int h1 = 20348;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y68 = xn[i];
        c33 = hi86 - y68;
        cur3 = out95 * 9393;
        v70 = dat49 + out95;
        darr[i] = hi88;
        yo[i] = c59;
    }
    free(darr);
}
int main() { test_func(); return 0; }

