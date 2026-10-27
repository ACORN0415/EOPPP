// RTPG_4219: vars=5 stmts=12
#include <stdlib.h>
void test_func(void) {
    int a17 = 5;
    int res79 = 37624;
    int dat66 = 0;
    int z5 = 34;
    int lo16 = 96;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 45; i++) {
        dat66 = a17 + 38140;
        lo16 = lo16 - 3;
        z5 = z5 + 5;
        lo16 = lo16 + 1;
        lo16 = z5 - z5;
        a17 = a17 - 7;
        res79 = a17 - z5;
        lo16 = dat66 + z5;
        res79 = z5 - 41460;
        a17 = a17 - z5;
        z5 = res79 - 38;
        z5 = z5 + 2;
        darr[i] = z5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

