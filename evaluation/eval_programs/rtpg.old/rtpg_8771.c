// RTPG_8771: vars=10 stmts=2
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x48 = 100;
    double sum44 = 94.73;
    int v43 = 43;
    int cur84 = 79;
    int c99 = 50;
    int res14 = -15;
    int c1 = 61724;
    int dat86 = 2;
    int res2 = 27975;
    int cnt42 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 32;
    int sv0 = 0;
    int h1 = 51157;
    int sv1 = 0;
    int h2 = -37;
    int sv2 = 0;
    int h3 = 7;
    int sv3 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        c99 = xn[i];
        sum44 = sum44 * 31;
        res2 = v43 + 87;
        darr[i] = c1;
        if (res14 <= 25) {
        c99 = cnt42;
        }
        yo[i] = res2;
    }
    free(darr);
}
int main() { test_func(); return 0; }

