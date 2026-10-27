// RTPG_6245: vars=9 stmts=11
#include <stdlib.h>
void test_func(void) {
    int b5 = 24590;
    int cur49 = -22;
    int lo16 = 58991;
    int z62 = 44;
    int y79 = 60013;
    int lo73 = 10;
    int cnt58 = 86;
    int y7 = 0;
    int lo28 = -21;
    int *ptr = &b5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 23; i++) {
        cnt58 = cnt58 - lo73;
        y79 = lo16 + cur49;
        cur49 = y7 + lo16;
        lo73 = lo16 - 6;
        cur49 = cur49 + 3;
        y79 = y79 - 3;
        lo73 = b5;
        lo28 = z62 - lo28;
        cur49 = cur49 - 4;
        lo73 = y7 - 3;
        lo28 = cnt58 - y7;
        *ptr = *ptr + 2;
        darr[i] = lo28;
    }
    free(darr);
}
int main() { test_func(); return 0; }

