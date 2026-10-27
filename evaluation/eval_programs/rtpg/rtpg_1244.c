// RTPG_1244: vars=7 stmts=4
#include <stdlib.h>
void test_func(void) {
    int lo14 = 24969;
    int cnt39 = 38520;
    int y11 = 29;
    int x36 = 13;
    int b4 = 4;
    int y52 = 4;
    int tmp89 = -48;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 37; i++) {
        y52 = y52 + 5;
        b4 = b4;
        y11 = b4 + tmp89;
        cnt39 = b4 + 9;
        darr[i] = tmp89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

