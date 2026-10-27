// RTPG_9217: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int lo41 = -30;
    int res15 = 4;
    int hi14 = 42;
    int y5 = 30;
    int prev12 = 34;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 0;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        y5 = hi14 - res15;
        y5 = y5;
        hi14 = hi14 + 3;
        darr[i] = y5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

