// RTPG_4245: vars=3 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int dat49 = 33;
    int a47 = 2;
    int c1 = -15;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a47 = xn[i];
        c1 = a47 - dat49;
        a47 = a47 + dat49;
        a47 = c1 + a47;
        darr[i] = a47;
        if (a47 > 25) {
        a47 = a47 - 2;
        }
        yo[i] = c1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

