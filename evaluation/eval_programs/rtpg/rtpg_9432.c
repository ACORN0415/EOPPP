// RTPG_9432: vars=7 stmts=5
#include <stdlib.h>
void test_func(void) {
    int x48 = -38;
    int dat91 = -37;
    int a6 = 0;
    int dat76 = 8;
    int out52 = -1;
    int out85 = 6;
    int lo47 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 93; i++) {
        dat91 = out52 - lo47;
        dat76 = x48 + 4;
        a6 = dat91;
        lo47 = lo47 - 2;
        lo47 = lo47 - 49020;
        darr[i] = a6;
    }
    free(darr);
}
int main() { test_func(); return 0; }

