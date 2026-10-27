// RTPG_5885: vars=10 stmts=6
#include <stdlib.h>
void test_func(void) {
    int val77 = 30933;
    int a25 = 4;
    int z79 = 33340;
    int dat68 = -31;
    int b15 = 47326;
    int sum73 = 0;
    int b6 = -15;
    int a40 = 5;
    int out13 = -38;
    int out19 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        b6 = a40 & sum73;
        b6 = b6 - 1;
        out13 = out13 + dat68;
        a25 = sum73 + b15;
        sum73 = b15 + 0;
        out13 = a25 ^ dat68;
        darr[i] = b15;
        if (a40 > 2) goto done;
    }
done:
    dat68 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

