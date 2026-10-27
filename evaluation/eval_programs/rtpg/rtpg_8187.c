// RTPG_8187: vars=4 stmts=10
#include <stdlib.h>
void test_func(void) {
    int v6 = 28976;
    int cur5 = 30;
    int z47 = 3;
    int lo92 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 10; i++) {
        z47 = lo92 - v6;
        v6 = z47 - 0;
        v6 = z47 - v6;
        lo92 = z47 - cur5;
        cur5 = lo92;
        cur5 = cur5 + 4;
        v6 = z47 + v6;
        v6 = z47 - 8;
        cur5 = lo92 - -49;
        lo92 = z47 - 51884;
        darr[i] = lo92;
    }
    free(darr);
}
int main() { test_func(); return 0; }

