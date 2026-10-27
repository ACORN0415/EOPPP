// RTPG_8992: vars=9 stmts=3
#include <stdlib.h>
void test_func(void) {
    int val60 = 6;
    int cnt30 = 59;
    int prev82 = 53;
    int val35 = 70;
    int acc40 = 7;
    int b0 = 51297;
    int c62 = -33;
    int prev4 = 41;
    int out35 = 4781;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 99; i++) {
        val35 = cnt30 | c62;
        prev82 = acc40 ^ b0;
        cnt30 = prev82 + prev4;
        darr[i] = prev4;
    }
    free(darr);
}
int main() { test_func(); return 0; }

