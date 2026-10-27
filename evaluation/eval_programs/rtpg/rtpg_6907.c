// RTPG_6907: vars=5 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int prev62 = 25290;
    int y10 = 2;
    int val42 = 3;
    int x58 = 4;
    int x29 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        x58 = xn[i];
        x58 = y10 + x29;
        prev62 = x58 / val42;
        val42 = val42 + 5;
        y10 = y10 - prev62;
        val42 = y10 + 9;
        darr[i] = x58;
        yo[i] = x58;
    }
    free(darr);
}
int main() { test_func(); return 0; }

