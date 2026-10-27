// RTPG_5712: vars=18 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int val35 = 7;
    int v6 = 42461;
    int prev25 = -1;
    int z3 = 6;
    int val57 = 4;
    int out49 = 12;
    int out6 = 10;
    int res72 = -4;
    int val34 = 42847;
    int v36 = 10;
    int z94 = 4985;
    int acc76 = -45;
    int sum55 = 39;
    int cnt23 = 9;
    int z80 = 70;
    int c79 = 22;
    int lo30 = 90;
    int val46 = 9;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        val46 = xn[i];
        val57 = val46 - z94;
        z3 = val46 + val35;
        val57 = val46 + v6;
        val57 = val57 - 1;
        res72 = prev25 - z94;
        darr[i] = val35;
        if (cnt23 >= 90) {
        c79 = val34;
        }
        yo[i] = out49;
    }
    free(darr);
}
int main() { test_func(); return 0; }

