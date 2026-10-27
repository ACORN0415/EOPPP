// RTPG_6372: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int x36 = 40;
    int cur17 = 14;
    int dat72 = 4;
    int cur87 = 21;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 30; i++) {
        cur17 = x36;
        dat72 = dat72 - dat72;
        cur17 = cur17 - cur17;
        cur17 = x36;
        dat72 = cur17 + 30;
        darr[i] = x36;
        if (dat72 == 97) {
        x36 = cur87 - cur17;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

