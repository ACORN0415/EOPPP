// RTPG_4011: vars=9 stmts=4
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int x85 = 3;
    int b84 = -46;
    int tmp49 = 7516;
    int b56 = 67;
    int tmp2 = 98;
    int acc83 = 13317;
    int cnt58 = 2033;
    int val26 = 3;
    int out94 = -47;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 8; i++) {
        switch (val26) {
            case 0: acc83 = 69; break;
            case 1: tmp49 = 52; break;
            case 2: tmp2 = 4; break;
            default: break;
        }
        val26 = val26 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

