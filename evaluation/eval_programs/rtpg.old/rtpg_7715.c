// RTPG_7715: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int val10 = 26;
    int res47 = 7;
    int v57 = -24;
    int out15 = 9;
    int a22 = 35;
    int a23 = -38;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 31; i++) {
        out15 = v57 - a23;
        v57 = a22 / a22;
        a23 = res47 + v57;
        out15 = val10 / a23;
        darr[i] = a23;
    }
    free(darr);
}
int main() { test_func(); return 0; }

