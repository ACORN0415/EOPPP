// RTPG_9614: vars=4 stmts=7
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int cur30 = 71;
    int acc35 = 6407;
    int prev3 = -23;
    int cur11 = 7;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        prev3 = xn[i];
        cur30 = cur30 + 62878;
        cur11 = prev3 + cur11;
        acc35 = prev3 - 8;
        prev3 = cur11 - acc35;
        acc35 = acc35 + 5;
        prev3 = cur11;
        acc35 = acc35;
        darr[i] = cur30;
        if (cur30 < -15) {
        prev3 = cur30 + acc35;
        }
        yo[i] = prev3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

