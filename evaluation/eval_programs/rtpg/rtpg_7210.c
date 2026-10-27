// RTPG_7210: vars=3 stmts=6
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int res1 = 10;
    int z23 = 47;
    int lo94 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        res1 = xn[i];
        res1 = res1 - lo94;
        z23 = lo94 - z23;
        res1 = lo94 + lo94;
        lo94 = z23 - z23;
        lo94 = lo94 | z23;
        lo94 = z23 + 54;
        darr[i] = lo94;
        yo[i] = lo94;
    }
    free(darr);
}
int main() { test_func(); return 0; }

