// RTPG_3416: vars=4 stmts=7
enum State { SLOW, RED, ON };
#include <stdlib.h>
void test_func(void) {
    int z64 = 44;
    int z96 = 21;
    int res9 = -47;
    float prev20 = 32.96;
    enum State st = SLOW;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 54; i++) {
        z64 = z64 - 5;
        z64 = z96;
        res9 = z64;
        prev20 = res9 + z96;
        res9 = res9 + 43;
        res9 = prev20;
        prev20 = res9 + 1;
        darr[i] = prev20;
    }
    free(darr);
}
int main() { test_func(); return 0; }

