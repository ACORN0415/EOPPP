// RTPG_5655: vars=6 stmts=3
#include <stdlib.h>
void test_func(void) {
    double lo59 = 37.69;
    int v12 = 8;
    int lo22 = 14;
    double acc40 = 57.74;
    int prev51 = 5;
    float out1 = 22.27;
    int *ptr = &v12;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 77; i++) {
        v12 = prev51 - lo59;
        lo22 = out1 - 47;
        acc40 = acc40 - 3;
        *ptr = *ptr + 5;
        darr[i] = v12;
    }
    free(darr);
}
int main() { test_func(); return 0; }

