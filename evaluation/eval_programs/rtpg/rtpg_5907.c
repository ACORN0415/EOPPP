// RTPG_5907: vars=3 stmts=2
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int c44 = 33;
    int c22 = -12;
    int dat2 = 18;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 14701;
    int sv0 = 0;
    int h1 = 22;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        c44 = xn[idx_arr[i]];
        c44 = c22 - 2;
        dat2 = c22;
        darr[i] = c44;
    }
    free(darr);
}
int main() { test_func(); return 0; }

