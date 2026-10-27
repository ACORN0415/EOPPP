// RTPG_2341: vars=9 stmts=6
#include <stdlib.h>
void test_func(void) {
    int prev85 = 24388;
    int sum56 = 7;
    int lo62 = 26;
    int c94 = 5;
    int prev13 = 34271;
    int a53 = 40004;
    int dat55 = 20;
    int v59 = -39;
    int out7 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 4;
    int sv0 = 0;
    int h1 = 20;
    int sv1 = 0;
    int i;
    for (i = 0; i < 74; i++) {
        switch (prev85) {
            case 0: prev13 = 76; break;
            case 1: prev13 = 4; break;
            case 2: lo62 = 3; break;
            default: break;
        }
        prev85 = prev85 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

