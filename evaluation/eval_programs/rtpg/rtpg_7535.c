// RTPG_7535: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int acc63 = 60231;
    int lo51 = -2;
    int cur87 = 24845;
    int out77 = 7;
    int hi0 = 9;
    int out27 = -1;
    int cur75 = 0;
    int b18 = 72;
    int z5 = 10;
    int tmp62 = 52441;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 62; i++) {
        out27 = out77;
        b18 = b18 - out77;
        out27 = out27 + 2;
        acc63 = hi0 + 10645;
        darr[i] = hi0;
        if (lo51 < 35) {
        z5 = hi0 - cur75;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

