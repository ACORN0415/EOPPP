// RTPG_2419: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int z95 = 7;
    int x61 = 5;
    int c23 = 18;
    int prev46 = 53233;
    int dat56 = 7;
    int acc21 = 48;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        switch (acc21) {
            case 0: c23 = 13010; break;
            case 1: prev46 = 55937; break;
            case 2: acc21 = 16; break;
            case 3: z95 = 58; break;
            default: break;
        }
        acc21 = acc21 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

