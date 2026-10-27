// RTPG_503: vars=4 stmts=3
#include <stdlib.h>
void test_func(void) {
    int dat84 = 4;
    int sum82 = 63;
    int b87 = 5;
    int hi7 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 41; i++) {
        dat84 = dat84 + 5;
        sum82 = sum82 + b87;
        sum82 = hi7 + hi7;
        darr[i] = dat84;
    }
    free(darr);
}
int main() { test_func(); return 0; }

