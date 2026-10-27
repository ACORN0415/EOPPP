// RTPG_1948: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int dat25 = 10;
    int hi28 = 13493;
    int cnt14 = 9;
    int cnt38 = 1;
    int x84 = 2;
    int c51 = 39892;
    int dat44 = 46528;
    int x54 = 85;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        dat44 = dat44 + 4;
        dat44 = cnt38 - x54;
        darr[i] = hi28;
    }
    free(darr);
}
int main() { test_func(); return 0; }

