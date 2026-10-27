// RTPG_4364: vars=5 stmts=7
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int x89 = 0;
    int b20 = 93;
    int c94 = 3;
    int z24 = 2;
    int hi15 = 22492;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 1;
    int sv0 = 0;
    int h1 = 13905;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        b20 = xn[i];
        x89 = b20 * -6;
        b20 = b20 * 79;
        b20 = hi15 * 40;
        b20 = x89 * 5;
        hi15 = c94 - 7;
        c94 = c94 + 4;
        z24 = c94 * 10;
        darr[i] = b20;
        yo[i] = b20;
    }
    free(darr);
}
int main() { test_func(); return 0; }

