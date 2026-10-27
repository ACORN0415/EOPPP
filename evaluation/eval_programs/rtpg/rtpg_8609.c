// RTPG_8609: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int cnt51 = 487;
    int val18 = -13;
    int res18 = -26;
    int c76 = -46;
    int c50 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 35619;
    int sv0 = 0;
    int h1 = 51;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        c50 = res18 ^ cnt51;
        val18 = cnt51 / val18;
        val18 = res18 + 36596;
        darr[i] = c50;
    }
    free(darr);
}
int main() { test_func(); return 0; }

