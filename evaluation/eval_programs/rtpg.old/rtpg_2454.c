// RTPG_2454: vars=13 stmts=5
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int b30 = 67;
    int tmp30 = 4;
    int sum10 = -4;
    int b15 = 6;
    int b50 = -16;
    int dat82 = -19;
    int cur2 = 10925;
    int y42 = 9571;
    int lo93 = -18;
    int val51 = 60;
    int lo24 = 22;
    int b11 = 21;
    int cnt28 = 4;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        val51 = xn[i];
        b50 = dat82;
        val51 = tmp30 + b30;
        sum10 = b50 + lo24;
        cur2 = val51 + val51;
        cur2 = cur2 - 3;
        darr[i] = cur2;
        yo[i] = b30;
    }
    free(darr);
}
int main() { test_func(); return 0; }

