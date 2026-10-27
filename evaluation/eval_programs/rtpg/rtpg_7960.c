// RTPG_7960: vars=16 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int a14 = 34943;
    int dat49 = 49986;
    int x53 = 53019;
    int y68 = 10;
    int c59 = 50242;
    int c15 = 88;
    int cur3 = 7310;
    int out95 = -33;
    int c5 = 1;
    int v70 = 77;
    int hi88 = 34;
    int c33 = 12;
    int hi86 = 12;
    int dat19 = 18038;
    int z60 = 17513;
    int b3 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 3;
    int sv0 = 0;
    int h1 = 20348;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        out95 = xn[i];
        y68 = x53 - out95;
        c33 = hi88 * 9393;
        z60 = c15 + hi88;
        darr[i] = a14;
        yo[i] = c5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

