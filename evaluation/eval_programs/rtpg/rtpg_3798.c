// RTPG_3798: vars=9 stmts=5
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int dat0 = 9;
    int c10 = -24;
    int dat62 = -44;
    int v75 = 50634;
    int out25 = 29081;
    int prev36 = 12824;
    int z13 = 2;
    int cnt37 = 31;
    int cnt25 = 17;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 4;
    int sv0 = 0;
    int h1 = 50326;
    int sv1 = 0;
    int h2 = 10;
    int sv2 = 0;
    int i;
    for (i = 0; i < 76; i++) {
        v75 = xn[idx_arr[i]];
        prev36 = v75 + cnt37;
        dat0 = c10 * 24157;
        out25 = cnt25 + prev36;
        c10 = c10;
        dat0 = dat0 * 61;
        darr[i] = dat0;
        if (cnt25 != 82) {
        c10 = dat62 - out25;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

