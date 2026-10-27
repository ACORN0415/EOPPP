// RTPG_6218: vars=4 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int a92 = -18;
    double prev62 = 34.30;
    int val85 = 0;
    int x25 = -23;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -31;
    int sv0 = 0;
    int h1 = -12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        prev62 = xn[i];
        x25 = x25 - 17058;
        x25 = x25 - 3;
        val85 = prev62 * 45;
        val85 = x25 * 44;
        darr[i] = a92;
        yo[i] = val85;
    }
    free(darr);
}
int main() { test_func(); return 0; }

