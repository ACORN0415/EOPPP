// RTPG_4782: vars=7 stmts=6
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int sum41 = 6;
    int res54 = 4;
    int y72 = 72;
    int a52 = 12;
    int v51 = -7;
    int x73 = 37;
    int tmp92 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        tmp92 = xn[i];
        sum41 = a52 - 8;
        x73 = a52 - res54;
        sum41 = v51;
        v51 = y72 - res54;
        sum41 = v51 - res54;
        res54 = a52 - 48389;
        darr[i] = y72;
        yo[i] = x73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

