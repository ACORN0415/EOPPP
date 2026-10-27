// RTPG_1489: vars=3 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int out65 = -36;
    float a51 = 30.05;
    int c77 = 78;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        c77 = xn[i];
        out65 = out65 + c77;
        c77 = c77 + 4;
        darr[i] = c77;
        yo[i] = out65;
    }
    free(darr);
}
int main() { test_func(); return 0; }

