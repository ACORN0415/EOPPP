// RTPG_6278: vars=9 stmts=5
#include <stdlib.h>
void test_func(void) {
    float hi22 = 2.50;
    int x19 = 13334;
    int z86 = 43710;
    int v77 = -6;
    float cur8 = 95.46;
    int cur11 = -3;
    double lo58 = 85.03;
    int sum6 = 62214;
    int v84 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        v77 = lo58 + v84;
        x19 = sum6;
        lo58 = lo58 + 3;
        x19 = x19 - 2;
        hi22 = lo58;
        darr[i] = v77;
    }
    free(darr);
}
int main() { test_func(); return 0; }

