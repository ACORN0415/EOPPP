// RTPG_5505: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int res1 = 48354;
    int val25 = 5;
    int out8 = 69;
    int acc2 = 12;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 6;
    int sv0 = 0;
    int h1 = 55781;
    int sv1 = 0;
    int i;
    for (i = 0; i < 59; i++) {
        acc2 = res1 * 3;
        res1 = acc2 * 4;
        acc2 = out8;
        out8 = out8 * 9;
        darr[i] = out8;
    }
    free(darr);
}
int main() { test_func(); return 0; }

