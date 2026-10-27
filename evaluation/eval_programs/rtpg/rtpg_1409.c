// RTPG_1409: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int hi8 = 10;
    int hi47 = -13;
    int res91 = 93;
    int y5 = -44;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 88; i++) {
        hi47 = y5 + 39945;
        y5 = hi8;
        y5 = res91 + res91;
        y5 = hi8 + hi8;
        y5 = y5 + 5;
        darr[i] = hi47;
        if (hi8 >= -21) {
        y5 = res91 - hi8;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

