// RTPG_1542: vars=3 stmts=4
#include <stdlib.h>
void test_func(void) {
    int c90 = 71;
    int z3 = 45005;
    int prev60 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        prev60 = prev60 - z3;
        c90 = c90 + 4;
        c90 = z3 + 15934;
        z3 = prev60;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

