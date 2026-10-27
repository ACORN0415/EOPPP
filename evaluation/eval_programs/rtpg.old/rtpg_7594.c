// RTPG_7594: vars=14 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int acc96 = 64130;
    int res67 = 4750;
    int v91 = 72;
    int val49 = -29;
    int c14 = 1;
    int acc17 = 29;
    int out50 = 4105;
    int acc70 = 60156;
    int out2 = -43;
    int z96 = 7;
    int x64 = 3;
    int hi59 = 16;
    int acc21 = 5;
    int dat96 = 51;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 22;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        acc70 = xn[i];
        c14 = acc17 * 16739;
        acc21 = acc96 - out50;
        darr[i] = v91;
        if (hi59 < 98) {
        hi59 = x64 + x64;
        }
        yo[i] = res67;
    }
    free(darr);
}
int main() { test_func(); return 0; }

