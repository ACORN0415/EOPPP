// RTPG_2705: vars=7 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int v35 = 8;
    int z79 = 28723;
    int cnt59 = -45;
    int prev82 = 35;
    int x92 = 88;
    int lo35 = 16;
    int cnt6 = 6166;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        x92 = xn[i];
        prev82 = z79 - lo35;
        prev82 = cnt59;
        prev82 = cnt59 - 26;
        v35 = prev82 + 31614;
        v35 = z79 + v35;
        prev82 = lo35 - x92;
        x92 = x92 + 5;
        cnt6 = cnt6 + 1;
        lo35 = lo35 - x92;
        v35 = cnt59 - z79;
        lo35 = lo35 - 2;
        z79 = cnt6 + cnt59;
        darr[i] = x92;
        if (v35 < -1) {
        lo35 = lo35 - 3;
        }
        yo[i] = cnt6;
    }
    free(darr);
}
int main() { test_func(); return 0; }

