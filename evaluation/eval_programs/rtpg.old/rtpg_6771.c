// RTPG_6771: vars=4 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int v96 = 77;
    int res81 = 85;
    int sum48 = 5;
    int y55 = 11500;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        sum48 = xn[i];
        sum48 = y55;
        sum48 = sum48 + sum48;
        y55 = res81 + sum48;
        sum48 = y55;
        res81 = sum48;
        darr[i] = sum48;
        if (y55 == 29) {
        v96 = v96 + 3;
        }
        yo[i] = v96;
    }
    free(darr);
}
int main() { test_func(); return 0; }

