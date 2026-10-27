// RTPG_8596: vars=7 stmts=5
#include <stdlib.h>
void test_func(void) {
    int tmp26 = 2;
    int res73 = 8;
    int val75 = 21;
    int y88 = 2211;
    int sum95 = 12029;
    int z70 = 99;
    int cur32 = -5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 89; i++) {
        z70 = sum95;
        y88 = cur32 + y88;
        sum95 = sum95 - 3;
        y88 = cur32 | res73;
        res73 = z70 & res73;
        darr[i] = res73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

