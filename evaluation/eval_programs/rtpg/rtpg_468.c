// RTPG_468: vars=3 stmts=5
int xn[32];
int yo[32];
enum State { SLOW, FAST, OFF };
#include <stdlib.h>
void test_func(void) {
    int out23 = 44;
    int lo70 = 12595;
    int z36 = 22316;
    enum State st = SLOW;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        lo70 = xn[i];
        out23 = lo70 - -26;
        out23 = out23 + 4;
        z36 = z36 + out23;
        out23 = z36 + out23;
        z36 = z36;
        darr[i] = out23;
        yo[i] = out23;
    }
    free(darr);
}
int main() { test_func(); return 0; }

