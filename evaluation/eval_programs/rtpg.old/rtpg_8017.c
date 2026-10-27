// RTPG_8017: vars=10 stmts=11
#include <stdlib.h>
void test_func(void) {
    int prev96 = 5;
    int hi43 = 47857;
    int tmp69 = 97;
    int prev89 = 42568;
    int c33 = 44;
    int out41 = 9;
    int x71 = 10;
    int dat60 = 8;
    int cur41 = 3;
    int v46 = 37393;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 33;
    int sv0 = 0;
    int h1 = 74;
    int sv1 = 0;
    int h2 = 64022;
    int sv2 = 0;
    int h3 = -9;
    int sv3 = 0;
    int i;
    for (i = 0; i < 95; i++) {
        tmp69 = v46 - x71;
        dat60 = hi43;
        prev96 = dat60 - x71;
        prev96 = dat60 * 2;
        dat60 = out41 - prev96;
        prev96 = prev89 + prev96;
        cur41 = hi43;
        hi43 = prev89 * 80;
        out41 = v46;
        cur41 = v46 + prev96;
        cur41 = hi43 * 28;
        darr[i] = prev89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

