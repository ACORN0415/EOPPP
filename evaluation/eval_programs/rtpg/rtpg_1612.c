// RTPG_1612: vars=3 stmts=4
#include <stdlib.h>
void test_func(void) {
    int tmp35 = 1554;
    int sum64 = 20;
    int c66 = 46;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 44939;
    int sv0 = 0;
    int h1 = 41;
    int sv1 = 0;
    int i;
    for (i = 0; i < 40; i++) {
        tmp35 = tmp35 - 3;
        sum64 = tmp35 * 6;
        tmp35 = sum64 * 29;
        sum64 = tmp35;
        darr[i] = c66;
        if (sum64 == 10) {
        c66 = c66;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

