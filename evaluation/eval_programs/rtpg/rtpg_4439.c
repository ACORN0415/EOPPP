// RTPG_4439: vars=7 stmts=8
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int sum22 = 42;
    int res89 = 86;
    int y69 = 2;
    int y73 = 79;
    int a88 = 61756;
    int v38 = -24;
    int cnt0 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 23; i++) {
        switch (v38) {
            case 0: a88 = 24219; break;
            case 1: a88 = -17; break;
            case 2: sum22 = 16389; break;
            default: break;
        }
        v38 = v38 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

