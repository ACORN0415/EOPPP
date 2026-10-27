// RTPG_807: vars=3 stmts=6
#include <stdlib.h>
void test_func(void) {
    int sum6 = -22;
    int b43 = 22727;
    int cur82 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 66; i++) {
        cur82 = b43 - b43;
        sum6 = cur82 + sum6;
        b43 = cur82 - sum6;
        cur82 = sum6 - 5;
        cur82 = sum6 - b43;
        sum6 = sum6 - 4;
        darr[i] = sum6;
        if (sum6 <= 58) {
        sum6 = b43 + cur82;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

