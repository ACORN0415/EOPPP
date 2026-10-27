// RTPG_3918: vars=4 stmts=4
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int cur70 = 7;
    int prev23 = 2;
    int res26 = 4;
    int prev46 = 58678;
    int *ptr = &prev46;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        prev46 = xn[i];
        res26 = res26 - 3;
        res26 = prev23 - 19129;
        prev23 = cur70;
        cur70 = cur70 + 3;
        *ptr = *ptr + 1;
        darr[i] = res26;
        if (prev23 >= 20) {
        res26 = res26 - 54895;
        }
        yo[i] = res26;
    }
    free(darr);
}
int main() { test_func(); return 0; }

