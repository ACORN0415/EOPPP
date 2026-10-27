// RTPG_2713: vars=9 stmts=4
#include <stdlib.h>
void test_func(void) {
    int a61 = 42;
    int prev84 = 0;
    int z4 = 7;
    int cur36 = 0;
    int c5 = 10;
    int tmp24 = 59999;
    int prev13 = 86;
    int out31 = -34;
    int prev79 = 42132;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 85; i++) {
        out31 = out31 - prev13;
        z4 = prev79 - out31;
        prev84 = prev79 + c5;
        out31 = out31 - 5;
        darr[i] = a61;
    }
    free(darr);
}
int main() { test_func(); return 0; }

