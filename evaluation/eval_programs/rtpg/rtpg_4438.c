// RTPG_4438: vars=9 stmts=4
#include <stdlib.h>
void test_func(void) {
    int cur92 = 18;
    int x15 = 41986;
    int dat91 = -36;
    int a36 = 2;
    int v53 = 8;
    int res39 = 9;
    int x1 = 54353;
    int y94 = 3;
    int x27 = 10;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 38; i++) {
        v53 = v53 + 2;
        a36 = a36 - res39;
        dat91 = x27;
        res39 = res39 - 4;
        darr[i] = a36;
    }
    free(darr);
}
int main() { test_func(); return 0; }

