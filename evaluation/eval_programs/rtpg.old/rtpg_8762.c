// RTPG_8762: vars=43 stmts=9
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int dat80 = 37245;
    int z56 = 1;
    int b9 = 80;
    int v52 = 49336;
    int a13 = 34;
    int dat90 = -4;
    int val23 = 3;
    int v45 = 3;
    int tmp0 = 1;
    int out74 = 39;
    int hi42 = 10785;
    int prev60 = -25;
    int c14 = 16;
    int out32 = 2;
    float dat45 = 82.31;
    int v6 = 45;
    int b72 = 6;
    int hi67 = 37;
    float val95 = 82.17;
    int z35 = 39;
    int z59 = 10097;
    int z29 = -32;
    int val77 = 100;
    float c30 = 3.88;
    int val89 = 2522;
    int lo16 = 19;
    float tmp27 = 69.55;
    int val55 = 7;
    double v69 = 20.05;
    int val84 = 62;
    int c79 = 45616;
    double prev7 = 98.09;
    int cnt97 = 3;
    int lo6 = 5;
    int x36 = -33;
    int dat19 = -34;
    int a57 = 2;
    int y26 = 6;
    float y21 = 14.61;
    int hi9 = 4;
    float acc71 = 9.92;
    int a76 = -14;
    int a14 = 4;
    int *ptr = &z35;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        out32 = xn[i];
        b9 = val95 - dat19;
        hi9 = v52 | hi67;
        z59 = acc71 + 29;
        val23 = val95 - val23;
        prev60 = prev60 + 5;
        z59 = c30 + z29;
        hi42 = b72 % hi42;
        hi9 = hi67 + dat90;
        cnt97 = acc71 - y21;
        *ptr = *ptr + 1;
        darr[i] = out74;
        yo[i] = z29;
    }
    free(darr);
}
int main() { test_func(); return 0; }

