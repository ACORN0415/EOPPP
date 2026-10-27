// RTPG_3631: vars=7 stmts=3
#include <stdlib.h>
void test_func(void) {
    int c14 = 57219;
    int hi57 = 7;
    int x51 = 2;
    int out27 = 2;
    int v4 = 95;
    int y52 = -1;
    int sum77 = 48;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 54; i++) {
        y52 = y52 - 1;
        hi57 = x51 - -36;
        x51 = c14 + 32;
        darr[i] = out27;
    }
    free(darr);
}
int main() { test_func(); return 0; }

