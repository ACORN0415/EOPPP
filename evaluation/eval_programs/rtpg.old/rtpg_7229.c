// RTPG_7229: vars=6 stmts=2
#include <stdlib.h>
void test_func(void) {
    int prev77 = 23628;
    int hi72 = 16;
    int val72 = 31;
    int dat14 = 3;
    int sum49 = 63;
    int x7 = 18479;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 87; i++) {
        sum49 = prev77 % x7;
        hi72 = hi72 + 4;
        darr[i] = x7;
    }
    free(darr);
}
int main() { test_func(); return 0; }

