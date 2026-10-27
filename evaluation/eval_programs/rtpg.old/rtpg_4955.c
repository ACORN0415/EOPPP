// RTPG_4955: vars=3 stmts=5
#include <stdlib.h>
void test_func(void) {
    int a58 = 22268;
    int hi33 = 35237;
    int sum20 = 56345;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        a58 = a58;
        sum20 = sum20 - 5;
        sum20 = sum20 + 2;
        hi33 = hi33 - 4;
        hi33 = a58 - a58;
        darr[i] = sum20;
    }
    free(darr);
}
int main() { test_func(); return 0; }

