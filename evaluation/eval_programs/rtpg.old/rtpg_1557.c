// RTPG_1557: vars=3 stmts=8
#include <stdlib.h>
void test_func(void) {
    int b7 = 15080;
    int out12 = 43596;
    int hi34 = 7;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 20; i++) {
        out12 = out12 - 8;
        out12 = b7 + out12;
        hi34 = hi34 - b7;
        hi34 = hi34 - 3;
        out12 = out12;
        hi34 = b7 - 2;
        hi34 = out12 - b7;
        hi34 = b7;
        darr[i] = out12;
        if (out12 == -9) {
        b7 = out12 - b7;
        }
    }
done:
    hi34 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

