// RTPG_7658: vars=10 stmts=5
#include <stdlib.h>
void test_func(void) {
    int a56 = 4;
    int x2 = 50638;
    int val61 = 94;
    int sum66 = 60;
    int val68 = -28;
    int out40 = 50;
    int hi8 = -16;
    int y79 = -42;
    int b22 = 23;
    int res97 = 47855;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 45; i++) {
        val68 = y79 + a56;
        y79 = hi8 | a56;
        out40 = hi8 / val61;
        sum66 = sum66 | val61;
        hi8 = y79 ^ y79;
        darr[i] = x2;
        if (x2 >= -14) {
        b22 = y79 - 1;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

