// RTPG_9153: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int lo95 = 9;
    int a7 = 31;
    int y82 = 53;
    int acc36 = 7;
    int prev12 = -45;
    int y59 = 5;
    int v71 = 53185;
    int z92 = 2;
    int dat48 = 97;
    int v46 = 38462;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 55416;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 1;
    int sv2 = 0;
    int i;
    for (i = 0; i < 45; i++) {
        acc36 = acc36 - 3;
        lo95 = y82 * 8;
        v71 = a7 * 45059;
        z92 = lo95;
        darr[i] = y59;
    }
    free(darr);
}
int main() { test_func(); return 0; }

