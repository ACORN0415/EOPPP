// RTPG_536: vars=10 stmts=6
#include <stdlib.h>
void test_func(void) {
    int a67 = 25;
    int acc96 = 24;
    int tmp6 = 10;
    int b47 = 28;
    int y86 = 10;
    int acc8 = -33;
    int b14 = 73;
    int x97 = 7;
    int dat96 = 94;
    int cnt22 = 6435;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 17;
    int sv0 = 0;
    int h1 = 50739;
    int sv1 = 0;
    int h2 = 14157;
    int sv2 = 0;
    int i;
    for (i = 0; i < 48; i++) {
        a67 = y86 + dat96;
        acc96 = dat96 * 0;
        b14 = x97 + acc8;
        b14 = b47 * 21;
        acc8 = x97 - acc8;
        dat96 = dat96 + 3;
        darr[i] = acc8;
    }
    free(darr);
}
int main() { test_func(); return 0; }

