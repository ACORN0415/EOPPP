// RTPG_1559: vars=6 stmts=9
enum State { SLOW, FAST, RED };
#include <stdlib.h>
void test_func(void) {
    int a11 = 22334;
    int hi83 = -5;
    int tmp65 = 13;
    int cur74 = 54216;
    int sum47 = 8;
    int a21 = 16166;
    enum State st = SLOW;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 2;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int h2 = 4;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        a11 = hi83 + sum47;
        a21 = a21 * 7;
        a11 = tmp65 - tmp65;
        sum47 = hi83 + 6;
        a11 = a11 + a21;
        sum47 = a21 - hi83;
        sum47 = tmp65 - a21;
        hi83 = cur74 + cur74;
        sum47 = hi83;
        darr[i] = a21;
    }
    free(darr);
}
int main() { test_func(); return 0; }

