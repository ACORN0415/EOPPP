// RTPG_8195: vars=10 stmts=2
#include <stdlib.h>
void test_func(void) {
    int c79 = -31;
    int b63 = 13;
    int x58 = 45787;
    int v52 = 45;
    int acc87 = 25;
    int b85 = 37;
    int c93 = 3;
    int lo93 = 10;
    int lo44 = 28;
    int hi3 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 95; i++) {
        c93 = c93 - 3;
        b85 = v52 + 20;
        darr[i] = b85;
        if (b63 < 9) {
        b63 = b63 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

