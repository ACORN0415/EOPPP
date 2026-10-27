// RTPG_6911: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int out50 = 68;
    int cur22 = 6;
    int val72 = 0;
    int hi80 = 3;
    int c44 = 6;
    int out94 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 66; i++) {
        out94 = out94 + 5;
        out50 = out50 - 5;
        val72 = val72 - 3;
        cur22 = cur22 - cur22;
        darr[i] = c44;
    }
    free(darr);
}
int main() { test_func(); return 0; }

