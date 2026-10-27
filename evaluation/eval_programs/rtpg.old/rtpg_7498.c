// RTPG_7498: vars=3 stmts=5
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int cur0 = 7;
    int z29 = 57164;
    int v38 = 1;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 85; i++) {
        switch (cur0) {
            case 0: z29 = 29988; break;
            case 1: z29 = 30053; break;
            case 2: v38 = 66; break;
            default: break;
        }
        cur0 = cur0 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

