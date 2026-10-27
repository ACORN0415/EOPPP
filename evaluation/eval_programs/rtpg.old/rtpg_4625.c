// RTPG_4625: vars=5 stmts=6
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int dat58 = 42573;
    int val99 = 38;
    int a46 = -2;
    int prev76 = -36;
    int cnt90 = 32607;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        cnt90 = xn[i];
        val99 = val99 - 1;
        dat58 = val99;
        dat58 = dat58 - 5;
        val99 = dat58;
        prev76 = prev76;
        cnt90 = a46;
        darr[i] = a46;
        if (prev76 <= 6) {
        a46 = a46 - 35180;
        }
        yo[i] = prev76;
    }
    free(darr);
}
int main() { test_func(); return 0; }

