// RTPG_1952: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int sum59 = 2;
    int dat49 = -29;
    int res78 = 26;
    int b66 = 100;
    int x1 = 40308;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 15; i++) {
        res78 = sum59 - dat49;
        x1 = x1 + 5;
        x1 = sum59;
        darr[i] = x1;
        if (x1 == -9) {
        b66 = b66;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

