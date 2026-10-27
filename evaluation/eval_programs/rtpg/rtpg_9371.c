// RTPG_9371: vars=4 stmts=4
int xn[64];
int yo[64];
enum State { FAST, RED, BLUE };
#include <stdlib.h>
void test_func(void) {
    int sum8 = 94;
    int x53 = 0;
    int val43 = 53064;
    int v97 = 9;
    enum State st = FAST;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        x53 = xn[i];
        v97 = v97 + 1;
        sum8 = v97;
        sum8 = sum8 + 5;
        x53 = x53 - 3;
        darr[i] = val43;
        yo[i] = val43;
    }
    free(darr);
}
int main() { test_func(); return 0; }

