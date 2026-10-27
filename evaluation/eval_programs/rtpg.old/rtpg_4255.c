// RTPG_4255: vars=32 stmts=12
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int dat35 = 1;
    int out82 = 52002;
    int c16 = 2;
    int cnt43 = 31885;
    int out70 = -20;
    int prev54 = -9;
    int val2 = 35;
    int v78 = 5;
    int res67 = 49030;
    int a19 = 57;
    int c31 = -2;
    int val5 = 70;
    int acc89 = 60;
    int acc86 = -47;
    int val52 = 78;
    int sum39 = 6;
    int a51 = 17034;
    int hi18 = -48;
    int a94 = 48;
    int x50 = 10;
    int sum28 = 6;
    int cnt11 = 14;
    int val3 = 53950;
    int prev81 = 51;
    int b16 = 9;
    int sum50 = 10;
    int tmp10 = 5;
    int z99 = 46919;
    int x10 = 6;
    int out12 = 62232;
    int sum49 = 2294;
    int a14 = 4033;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        x10 = xn[i];
        prev54 = x10 - b16;
        z99 = hi18 + val3;
        sum28 = sum28 + 5;
        val2 = sum28 - a14;
        sum39 = sum39 - 3;
        acc89 = a14;
        a14 = a14 + res67;
        c16 = cnt11 + a19;
        x10 = x10 - v78;
        c16 = cnt11 + 3;
        dat35 = dat35 - 5;
        tmp10 = acc89 - prev54;
        darr[i] = x10;
        if (sum49 != -35) {
        z99 = x50 - 2;
        }
        yo[i] = a14;
    }
    free(darr);
}
int main() { test_func(); return 0; }

