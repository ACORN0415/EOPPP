// RTPG_9258: vars=9 stmts=3
#include <stdlib.h>
void test_func(void) {
    int out80 = 49;
    int b3 = 52839;
    int x49 = 38;
    int b38 = 4;
    int a50 = -35;
    int lo93 = -23;
    int hi26 = -16;
    int c49 = 30344;
    int cur58 = 59622;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 10; i++) {
        b3 = out80 - x49;
        cur58 = b38 + b3;
        x49 = c49 + b3;
        darr[i] = c49;
        if (x49 != 10) {
        a50 = a50 + b3;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

