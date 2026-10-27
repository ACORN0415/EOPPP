// RTPG_9676: vars=3 stmts=5
int xn[32];
int yo[32];
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int cur92 = -23;
    int acc34 = 21799;
    int out87 = 49;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 28; i++) {
        switch (acc34) {
            case 0: acc34 = 1; break;
            case 1: cur92 = 34; break;
            default: break;
        }
        acc34 = acc34 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

