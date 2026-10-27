// RTPG_6831: vars=5 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int x58 = 25290;
    int val42 = 2;
    int prev62 = 3;
    int x29 = 4;
    int y10 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        x29 = xn[i];
        x29 = val42 + y10;
        x58 = x29 / prev62;
        prev62 = prev62 + 5;
        val42 = val42 - x58;
        prev62 = val42 + 9;
        darr[i] = x29;
        yo[i] = x29;
    }
    free(darr);
}
int main() { test_func(); return 0; }

