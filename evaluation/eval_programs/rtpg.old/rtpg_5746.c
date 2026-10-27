// RTPG_5746: vars=4 stmts=2
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int x71 = 1509;
    float a88 = 66.01;
    int a25 = 7687;
    float tmp59 = 89.30;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 47158;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x71 = xn[i];
        a88 = tmp59 - a25;
        a25 = tmp59;
        darr[i] = tmp59;
        if (tmp59 < -11) {
        tmp59 = a25 + 33;
        }
        yo[i] = a88;
    }
    free(darr);
}
int main() { test_func(); return 0; }

