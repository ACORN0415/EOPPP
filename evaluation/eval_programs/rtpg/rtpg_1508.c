// RTPG_1508: vars=5 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int acc30 = 95;
    int b49 = 5;
    int tmp90 = -48;
    int v36 = 29;
    int y44 = 86;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 70;
    int sv0 = 0;
    int h1 = 35;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        y44 = xn[i];
        v36 = v36 - 5;
        acc30 = acc30 - 4;
        b49 = v36 + b49;
        acc30 = v36 + v36;
        acc30 = v36 * 56;
        v36 = acc30 + -50;
        acc30 = b49 * 5;
        b49 = tmp90 * 52262;
        darr[i] = b49;
        yo[i] = v36;
    }
    free(darr);
}
int main() { test_func(); return 0; }

