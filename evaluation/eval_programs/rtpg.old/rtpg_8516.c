// RTPG_8516: vars=7 stmts=5
#include <stdlib.h>
void test_func(void) {
    double a91 = 28.33;
    int res42 = 30;
    double lo74 = 65.50;
    int acc49 = 1;
    int lo38 = 4;
    float lo69 = 19.43;
    int cur23 = -28;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 57488;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int h2 = 0;
    int sv2 = 0;
    int i;
    for (i = 0; i < 17; i++) {
        cur23 = a91 - a91;
        cur23 = a91 * 48;
        lo38 = acc49 ^ cur23;
        lo74 = lo38;
        lo74 = lo74 - a91;
        darr[i] = lo38;
    }
    free(darr);
}
int main() { test_func(); return 0; }

