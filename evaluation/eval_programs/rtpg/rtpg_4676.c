// RTPG_4676: vars=5 stmts=6
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int a46 = 42573;
    int prev76 = 38;
    int val99 = -2;
    int cnt90 = -36;
    int dat58 = 32607;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        dat58 = xn[i];
        prev76 = prev76 - 1;
        a46 = prev76;
        a46 = a46 - 5;
        prev76 = a46;
        cnt90 = cnt90;
        dat58 = val99;
        darr[i] = val99;
        if (cnt90 <= 6) {
        val99 = val99 - 35180;
        }
        yo[i] = cnt90;
    }
    free(darr);
}
int main() { test_func(); return 0; }

