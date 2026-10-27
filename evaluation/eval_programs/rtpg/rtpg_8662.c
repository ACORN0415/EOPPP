// RTPG_8662: vars=8 stmts=5
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int val1 = 37;
    int dat83 = 28952;
    int res98 = 52296;
    int out96 = 50769;
    int out33 = 9;
    int res71 = 7;
    int tmp41 = 91;
    int v33 = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        dat83 = xn[i];
        out33 = out33 + 50081;
        res98 = out33 - v33;
        dat83 = dat83 + 4;
        tmp41 = val1;
        out33 = tmp41 - 31604;
        darr[i] = val1;
        if (val1 != 73) {
        dat83 = val1 + 100;
        }
        yo[i] = out96;
    }
    free(darr);
}
int main() { test_func(); return 0; }

