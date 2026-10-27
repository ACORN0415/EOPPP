// RTPG_9297: vars=3 stmts=12
#include <stdlib.h>
void test_func(void) {
    int v63 = 7;
    int hi91 = 6;
    int lo91 = 98;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        hi91 = lo91 + 7;
        hi91 = v63 + v63;
        hi91 = lo91 + v63;
        v63 = v63 + 2;
        lo91 = lo91 + 2;
        hi91 = hi91 + 1;
        hi91 = hi91 - v63;
        hi91 = hi91 + 1;
        lo91 = v63 + lo91;
        v63 = v63 + lo91;
        lo91 = lo91 + 4;
        lo91 = v63 - hi91;
        darr[i] = v63;
    }
    free(darr);
}
int main() { test_func(); return 0; }

