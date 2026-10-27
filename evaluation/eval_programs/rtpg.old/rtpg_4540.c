// RTPG_4540: vars=3 stmts=8
#include <stdlib.h>
void test_func(void) {
    int cur34 = 53274;
    int b72 = 19;
    int hi41 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 41; i++) {
        b72 = b72 - 4;
        b72 = hi41 + b72;
        hi41 = hi41 - 2;
        hi41 = b72 - hi41;
        hi41 = cur34 + 17;
        b72 = hi41 - 6;
        b72 = hi41 + 24;
        hi41 = hi41 - cur34;
        darr[i] = cur34;
        if (hi41 < 8) {
        cur34 = cur34;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

