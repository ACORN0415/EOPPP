// RTPG_8807: vars=4 stmts=8
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int c77 = 10;
    int prev30 = -14;
    int dat2 = 21;
    int lo71 = -4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        prev30 = xn[i];
        dat2 = dat2 - 3;
        dat2 = c77 + lo71;
        lo71 = lo71 + dat2;
        prev30 = dat2 + prev30;
        dat2 = dat2 + 2;
        c77 = prev30 + lo71;
        c77 = dat2;
        prev30 = lo71 + 9;
        darr[i] = dat2;
        if (lo71 <= -11) {
        c77 = c77 - 1;
        }
        yo[i] = prev30;
    }
    free(darr);
}
int main() { test_func(); return 0; }

