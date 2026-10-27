// RTPG_7260: vars=4 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int acc4 = 6;
    int cnt56 = 2;
    int out96 = 32;
    int dat55 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 50; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        dat55 = acc4 - dat55;
        acc4 = cnt56;
        dat55 = acc4 + dat55;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

