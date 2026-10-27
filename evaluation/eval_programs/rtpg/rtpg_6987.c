// RTPG_6987: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int cur22 = 68;
    int c44 = 6;
    int out94 = 0;
    int hi80 = 3;
    int out50 = 6;
    int val72 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 66; i++) {
        val72 = val72 + 5;
        cur22 = cur22 - 5;
        out94 = out94 - 3;
        c44 = c44 - c44;
        darr[i] = out50;
    }
    free(darr);
}
int main() { test_func(); return 0; }

