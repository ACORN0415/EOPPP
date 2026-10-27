// RTPG_7144: vars=5 stmts=4
#include <stdlib.h>
void test_func(void) {
    int z48 = 10;
    int prev0 = 50;
    int c0 = 12;
    int a28 = 4;
    int val84 = 20086;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -22;
    int sv0 = 0;
    int h1 = 98;
    int sv1 = 0;
    int i;
    for (i = 0; i < 12; i++) {
        c0 = c0 - 3;
        val84 = prev0 * 15515;
        c0 = val84 - c0;
        a28 = z48;
        darr[i] = z48;
    }
    free(darr);
}
int main() { test_func(); return 0; }

