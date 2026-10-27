// RTPG_2877: vars=8 stmts=5
#include <stdlib.h>
void test_func(void) {
    int a51 = -3;
    int res17 = -30;
    int dat24 = 2146;
    int prev73 = 41;
    int z27 = 30339;
    int cur68 = 14880;
    int c7 = 7;
    int sum74 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 50; i++) {
        c7 = c7 - -34;
        res17 = cur68 + prev73;
        c7 = z27 - z27;
        prev73 = res17;
        dat24 = c7 + 3;
        darr[i] = prev73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

