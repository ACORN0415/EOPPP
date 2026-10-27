// RTPG_9040: vars=10 stmts=3
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int acc17 = 22;
    int b39 = -10;
    int out67 = 437;
    float cur86 = 93.51;
    int lo13 = 10;
    int sum36 = 51074;
    int prev37 = 3;
    double cnt63 = 86.09;
    double z53 = 14.64;
    int a80 = 37;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -39;
    int sv0 = 0;
    int h1 = 40;
    int sv1 = 0;
    int h2 = 89;
    int sv2 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        b39 = xn[i];
        out67 = a80;
        out67 = out67 + 58484;
        cnt63 = out67 * 6;
        darr[i] = acc17;
        yo[i] = cnt63;
    }
    free(darr);
}
int main() { test_func(); return 0; }

