// RTPG_7846: vars=10 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int res16 = 7;
    int cnt91 = 92;
    int b93 = 64288;
    float acc0 = 33.74;
    double c93 = 15.14;
    int a16 = 5;
    int sum78 = 21;
    float acc15 = 35.26;
    int lo47 = 14;
    int lo43 = 12;
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
        c93 = cnt91 * -14;
        lo43 = res16;
        darr[i] = sum78;
        if (c93 > 20) {
        lo47 = lo47;
        }
        yo[i] = a16;
    }
    free(darr);
}
int main() { test_func(); return 0; }

