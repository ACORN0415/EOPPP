// RTPG_7690: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int x72 = 1176;
    int z77 = 20842;
    float dat36 = 41.58;
    int a79 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 14; i++) {
        x72 = dat36 & a79;
        x72 = x72;
        x72 = a79;
        dat36 = x72 - a79;
        darr[i] = x72;
        if (dat36 > 67) {
        x72 = x72 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

