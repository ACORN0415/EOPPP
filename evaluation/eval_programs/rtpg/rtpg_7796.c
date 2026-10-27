// RTPG_7796: vars=4 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int y39 = -45;
    int res5 = 4;
    int sum29 = 32;
    int z31 = 0;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        z31 = xn[i];
        res5 = z31;
        y39 = y39 + res5;
        sum29 = sum29 - 1;
        darr[i] = sum29;
        yo[i] = res5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

