// RTPG_609: vars=5 stmts=11
#include <stdlib.h>
void test_func(void) {
    int x79 = -13;
    int z75 = 16;
    int cur57 = 11;
    int v41 = 1;
    int tmp4 = 42962;
    int *ptr = &tmp4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 24; i++) {
        cur57 = x79 + tmp4;
        cur57 = cur57 - 3;
        v41 = v41 - 5;
        x79 = x79 - 2;
        z75 = z75 + 3;
        tmp4 = cur57 + z75;
        z75 = z75 - tmp4;
        tmp4 = tmp4 - 3;
        x79 = cur57 + v41;
        tmp4 = x79;
        x79 = v41 - tmp4;
        *ptr = *ptr + 3;
        darr[i] = v41;
    }
    free(darr);
}
int main() { test_func(); return 0; }

