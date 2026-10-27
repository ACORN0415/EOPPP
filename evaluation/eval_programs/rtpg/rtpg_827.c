// RTPG_827: vars=7 stmts=4
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int res99 = 8;
    int x7 = 2;
    int acc5 = 8;
    int res54 = 21;
    int x13 = 22107;
    int x24 = 20535;
    int y51 = 22;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 6;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int h2 = 6;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        x24 = xn[i];
        x7 = x24 * 68;
        x13 = x24 * 92;
        x13 = acc5 + y51;
        res54 = acc5 + y51;
        darr[i] = y51;
        yo[i] = y51;
    }
    free(darr);
}
int main() { test_func(); return 0; }

