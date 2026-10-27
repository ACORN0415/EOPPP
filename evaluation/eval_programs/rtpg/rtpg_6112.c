// RTPG_6112: vars=6 stmts=2
#include <stdlib.h>
void test_func(void) {
    int res31 = 0;
    int lo40 = 0;
    float c74 = 26.89;
    float x24 = 12.60;
    float cnt40 = 91.53;
    int v72 = 28;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 49; i++) {
        lo40 = res31 + v72;
        lo40 = res31 + lo40;
        darr[i] = v72;
    }
    free(darr);
}
int main() { test_func(); return 0; }

