// RTPG_4388: vars=3 stmts=12
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int tmp19 = 54;
    int hi16 = 4;
    int lo16 = 68;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        tmp19 = xn[i];
        lo16 = lo16 - 3;
        tmp19 = lo16 - tmp19;
        lo16 = hi16 - 9;
        tmp19 = tmp19 + 2;
        hi16 = hi16 - lo16;
        hi16 = tmp19;
        hi16 = hi16 + tmp19;
        tmp19 = lo16;
        hi16 = hi16;
        hi16 = hi16 + 2;
        lo16 = lo16 - 3;
        hi16 = hi16 - tmp19;
        darr[i] = lo16;
        if (hi16 >= 71) {
        hi16 = lo16 + tmp19;
        }
        yo[i] = hi16;
    }
    free(darr);
}
int main() { test_func(); return 0; }

