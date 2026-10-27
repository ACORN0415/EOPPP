// RTPG_1970: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int res13 = 2;
    int hi17 = 7;
    int hi92 = 9;
    int prev88 = 55833;
    int a82 = -25;
    int out71 = 8;
    int out99 = 3;
    int y37 = 7424;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 6;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 86; i++) {
        res13 = y37;
        y37 = y37 - 1;
        darr[i] = a82;
    }
    free(darr);
}
int main() { test_func(); return 0; }

