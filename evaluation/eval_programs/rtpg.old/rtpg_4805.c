// RTPG_4805: vars=4 stmts=2
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int a59 = 20;
    int y62 = 56;
    float tmp4 = 39.40;
    int cnt42 = 16622;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        tmp4 = xn[i];
        y62 = y62 + 30;
        y62 = a59 - tmp4;
        darr[i] = cnt42;
        yo[i] = cnt42;
    }
    free(darr);
}
int main() { test_func(); return 0; }

