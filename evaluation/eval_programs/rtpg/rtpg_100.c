// RTPG_100: vars=3 stmts=2
#include <stdlib.h>
void test_func(void) {
    int acc44 = 12846;
    int x32 = 9;
    int y63 = 11381;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        y63 = acc44 + y63;
        y63 = x32 - y63;
        darr[i] = x32;
        if (acc44 == 70) {
        acc44 = x32;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

