// RTPG_7941: vars=10 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int acc15 = 7;
    int acc0 = 92;
    int a16 = 64288;
    float sum78 = 33.74;
    double res16 = 15.14;
    int c93 = 5;
    int b93 = 21;
    float lo43 = 35.26;
    int lo47 = 14;
    int cnt91 = 12;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 28;
    int sv0 = 0;
    int h1 = -44;
    int sv1 = 0;
    int h2 = 52;
    int sv2 = 0;
    int h3 = 7082;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        lo47 = xn[i];
        res16 = acc0 * -14;
        cnt91 = acc15;
        darr[i] = b93;
        if (res16 > 20) {
        lo47 = lo47;
        }
        yo[i] = c93;
    }
    free(darr);
}
int main() { test_func(); return 0; }

