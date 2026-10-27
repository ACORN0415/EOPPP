// RTPG_7119: vars=7 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int prev76 = 62;
    int out20 = -36;
    int lo99 = 2;
    int x66 = 10;
    int a35 = 31;
    int out71 = 30;
    int val57 = 49028;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        out71 = xn[i];
        prev76 = out71;
        out71 = out71;
        x66 = prev76;
        out71 = out20 + 46220;
        out71 = x66 + val57;
        darr[i] = out20;
        yo[i] = val57;
    }
    free(darr);
}
int main() { test_func(); return 0; }

