// RTPG_5226: vars=9 stmts=3
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int v39 = 53158;
    float z69 = 66.78;
    double hi9 = 49.52;
    int v84 = 50;
    float cnt94 = 88.29;
    double v77 = 32.17;
    int val92 = 32;
    int res53 = 4;
    int tmp38 = 92;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 58;
    int sv0 = 0;
    int h1 = 56;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        v84 = xn[i];
        hi9 = z69 + v39;
        cnt94 = cnt94 - 1;
        v77 = cnt94 - 1;
        darr[i] = res53;
        yo[i] = cnt94;
    }
    free(darr);
}
int main() { test_func(); return 0; }

