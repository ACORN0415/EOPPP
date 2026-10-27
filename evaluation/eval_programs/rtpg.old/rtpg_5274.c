// RTPG_5274: vars=11 stmts=4
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int tmp65 = 44;
    int sum75 = -34;
    int v81 = 65;
    int prev76 = 100;
    int lo86 = 58392;
    int b21 = 6;
    int val57 = 6;
    int hi74 = 22014;
    int prev22 = -45;
    int lo30 = 83;
    int z93 = 45472;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        lo86 = xn[i];
        v81 = lo30 / hi74;
        v81 = val57 + prev22;
        prev22 = val57 + 18013;
        prev22 = hi74 % prev22;
        darr[i] = lo86;
        if (v81 > 90) {
        sum75 = sum75;
        }
        yo[i] = lo86;
    }
done:
    lo86 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

