// RTPG_9499: vars=7 stmts=6
#include <stdlib.h>
void test_func(void) {
    int z69 = 21245;
    float out81 = 1.22;
    int hi97 = 54619;
    int tmp95 = 0;
    double dat58 = 29.75;
    int val57 = 10;
    float tmp53 = 6.97;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 81; i++) {
        tmp95 = z69 + val57;
        tmp95 = tmp95 - 4;
        out81 = out81 - 5;
        z69 = z69 - out81;
        out81 = out81 + 54;
        hi97 = dat58 - tmp95;
        darr[i] = out81;
    }
    free(darr);
}
int main() { test_func(); return 0; }

