// RTPG_6561: vars=8 stmts=6
#include <stdlib.h>
void test_func(void) {
    int b29 = 7103;
    int b49 = 34667;
    int out32 = 12;
    int v47 = 37138;
    int sum7 = 80;
    int y27 = 2;
    int y40 = 43;
    int v3 = 56760;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 25282;
    int sv0 = 0;
    int h1 = 16;
    int sv1 = 0;
    int h2 = 30;
    int sv2 = 0;
    int h3 = 19997;
    int sv3 = 0;
    int i;
    for (i = 0; i < 75; i++) {
        v47 = sum7;
        out32 = out32 * 4;
        b49 = b49 - 12;
        v3 = y27 + sum7;
        v3 = sum7 * 5;
        b29 = b29 - 3;
        darr[i] = y40;
    }
    free(darr);
}
int main() { test_func(); return 0; }

