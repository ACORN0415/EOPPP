// RTPG_3969: vars=5 stmts=2
#include <stdlib.h>
void test_func(void) {
    int dat14 = 5;
    int c55 = 29962;
    int cur48 = 7;
    int hi10 = -49;
    int acc71 = 34;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 61; i++) {
        acc71 = acc71;
        cur48 = cur48 - hi10;
        darr[i] = hi10;
    }
    free(darr);
}
int main() { test_func(); return 0; }

