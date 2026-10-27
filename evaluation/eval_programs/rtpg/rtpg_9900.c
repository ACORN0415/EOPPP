// RTPG_9900: vars=7 stmts=7
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int lo85 = 13;
    int z13 = 29;
    int z6 = 65348;
    double cnt56 = 8.25;
    int acc62 = 96;
    int tmp40 = 23;
    int tmp84 = 14473;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 18; i++) {
        acc62 = xn[idx_arr[i]];
        tmp84 = tmp84 + 2;
        z6 = z6 + acc62;
        tmp84 = z13 % lo85;
        lo85 = z6 & tmp84;
        tmp40 = lo85 ^ z6;
        tmp40 = cnt56 + z6;
        tmp84 = tmp84 + tmp40;
        darr[i] = cnt56;
    }
    free(darr);
}
int main() { test_func(); return 0; }

