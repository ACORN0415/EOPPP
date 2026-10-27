// RTPG_2569: vars=9 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int val60 = 653;
    int prev19 = 70;
    int cnt84 = 7;
    int y65 = -16;
    int x34 = 8;
    int dat28 = 97;
    int prev3 = 35;
    int prev68 = 10;
    int lo33 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 54; i++) {
        switch (prev3) {
            case 0: val60 = 8; break;
            case 1: prev3 = -38; break;
            default: break;
        }
        prev3 = prev3 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

