// RTPG_7426: vars=4 stmts=8
#include <stdlib.h>
void test_func(void) {
    int x3 = 50;
    int val97 = 31;
    int a87 = 8;
    int prev81 = 3;
    int *ptr = &x3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 86; i++) {
        prev81 = x3 + 82;
        prev81 = val97 + a87;
        val97 = x3 - -41;
        val97 = val97 - 5;
        val97 = prev81 + x3;
        val97 = val97;
        x3 = a87 / val97;
        a87 = prev81 + val97;
        *ptr = *ptr + 5;
        darr[i] = prev81;
    }
    free(darr);
}
int main() { test_func(); return 0; }

