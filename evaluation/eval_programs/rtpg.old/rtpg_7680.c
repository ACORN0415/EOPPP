// RTPG_7680: vars=8 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int hi64 = 22;
    int acc19 = 38874;
    int z60 = 16;
    int dat98 = 10;
    int sum77 = 61;
    int res86 = 5;
    int res95 = -46;
    int y43 = 82;
    int *ptr = &acc19;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        hi64 = xn[i];
        dat98 = hi64 + dat98;
        dat98 = res95 - z60;
        acc19 = acc19 + z60;
        acc19 = acc19 - 3;
        z60 = res95;
        dat98 = dat98;
        acc19 = acc19 - 5;
        z60 = res86 + 3;
        *ptr = *ptr + 5;
        darr[i] = hi64;
        yo[i] = acc19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

