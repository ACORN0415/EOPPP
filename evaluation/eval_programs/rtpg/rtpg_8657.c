// RTPG_8657: vars=9 stmts=6
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int b53 = 9;
    int tmp94 = 13905;
    int out40 = 64765;
    int lo19 = 71;
    int c42 = 35;
    int x33 = 95;
    int out59 = 39;
    int y11 = 44;
    int cur27 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out40 = xn[i];
        b53 = b53 + 2;
        x33 = lo19 - -6;
        cur27 = b53 + b53;
        out59 = out40 - 47;
        out40 = cur27 - lo19;
        out40 = out40 + 4;
        darr[i] = c42;
        if (cur27 < 38) {
        out59 = b53;
        }
        yo[i] = lo19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

