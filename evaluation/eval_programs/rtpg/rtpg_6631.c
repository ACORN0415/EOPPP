// RTPG_6631: vars=5 stmts=7
#include <stdlib.h>
void test_func(void) {
    int val88 = 5;
    int x82 = 62094;
    int a8 = -29;
    int out83 = 56;
    int x9 = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        switch (val88) {
            case 0: x82 = 10260; break;
            case 1: out83 = 76; break;
            case 2: out83 = 43284; break;
            default: break;
        }
        val88 = val88 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

