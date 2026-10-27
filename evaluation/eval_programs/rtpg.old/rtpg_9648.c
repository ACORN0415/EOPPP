// RTPG_9648: vars=9 stmts=7
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int dat77 = 28;
    int acc93 = 20;
    int cur20 = 86;
    int out87 = 100;
    int x50 = -33;
    int a30 = 60032;
    int z66 = 60;
    int res73 = 10;
    int prev50 = 55;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 10;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        acc93 = xn[i];
        prev50 = prev50 * 23851;
        prev50 = out87 * 47303;
        dat77 = out87 + dat77;
        acc93 = z66 + out87;
        a30 = z66;
        a30 = prev50;
        z66 = acc93;
        darr[i] = cur20;
        yo[i] = res73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

