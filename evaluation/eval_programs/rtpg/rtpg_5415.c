// RTPG_5415: vars=10 stmts=10
#include <stdlib.h>
void test_func(void) {
    int val22 = 32432;
    int b23 = 9;
    int lo73 = 57;
    int tmp13 = 4;
    int c0 = -4;
    int y7 = 36041;
    int tmp22 = 43496;
    int cur52 = 75;
    int cnt90 = 80;
    int sum62 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 39; i++) {
        tmp13 = tmp13 - 4;
        sum62 = cnt90 + 6;
        b23 = val22 - cnt90;
        cnt90 = b23 + sum62;
        c0 = y7 | b23;
        lo73 = sum62 + 4;
        lo73 = b23 + c0;
        tmp22 = lo73 / tmp22;
        b23 = tmp13 ^ cur52;
        lo73 = b23 - b23;
        darr[i] = tmp22;
    }
    free(darr);
}
int main() { test_func(); return 0; }

