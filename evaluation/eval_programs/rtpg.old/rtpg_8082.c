// RTPG_8082: vars=10 stmts=2
#include <stdlib.h>
void test_func(void) {
    int c79 = -31;
    int lo44 = 13;
    int v52 = 45787;
    int c93 = 45;
    int b63 = 25;
    int lo93 = 37;
    int acc87 = 3;
    int b85 = 10;
    int hi3 = 28;
    int x58 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 95; i++) {
        acc87 = acc87 - 3;
        lo93 = c93 + 20;
        darr[i] = lo93;
        if (lo44 < 9) {
        lo44 = lo44 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

