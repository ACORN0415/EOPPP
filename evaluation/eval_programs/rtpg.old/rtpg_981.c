// RTPG_981: vars=15 stmts=9
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int out26 = -33;
    int c80 = 57;
    int cnt91 = 61364;
    int val79 = 31;
    int y88 = 54968;
    int acc74 = 10;
    int y63 = 31;
    int c26 = 3;
    int sum33 = 41431;
    int dat74 = 94;
    int acc9 = 38;
    int cnt70 = 92;
    int acc67 = 3;
    int out19 = -32;
    int sum29 = -31;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        dat74 = xn[i];
        acc67 = acc67 + 4;
        acc74 = y63 + cnt70;
        acc9 = y88 + 50300;
        c26 = dat74 - acc74;
        acc9 = acc9 - 3;
        sum33 = acc74 - 11;
        out19 = dat74 - y88;
        y88 = y88 + 4;
        out19 = y88 - acc67;
        darr[i] = c80;
        if (sum33 <= 20) {
        acc9 = cnt70 - out19;
        }
        yo[i] = y88;
    }
    free(darr);
}
int main() { test_func(); return 0; }

