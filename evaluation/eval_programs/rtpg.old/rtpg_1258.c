// RTPG_1258: vars=7 stmts=4
#include <stdlib.h>
void test_func(void) {
    int tmp89 = 24969;
    int x36 = 38520;
    int y52 = 29;
    int b4 = 13;
    int lo14 = 4;
    int cnt39 = 4;
    int y11 = -48;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 37; i++) {
        cnt39 = cnt39 + 5;
        lo14 = lo14;
        y52 = lo14 + y11;
        x36 = lo14 + 9;
        darr[i] = y11;
    }
    free(darr);
}
int main() { test_func(); return 0; }

