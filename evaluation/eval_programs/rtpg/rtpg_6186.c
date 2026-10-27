// RTPG_6186: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int b85 = 2449;
    int z47 = 33;
    int dat4 = -6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 44; i++) {
        dat4 = b85;
        z47 = z47 - z47;
        z47 = dat4;
        z47 = dat4;
        b85 = dat4 + z47;
        dat4 = dat4;
        b85 = z47 + b85;
        dat4 = dat4 - dat4;
        dat4 = b85 - 39;
        darr[i] = dat4;
        if (b85 >= 45) {
        z47 = z47 + 4;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

