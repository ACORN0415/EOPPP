// RTPG_6183: vars=3 stmts=3
#include <stdlib.h>
void test_func(void) {
    int a34 = 27;
    int a21 = 38;
    int cur22 = 43;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        a34 = a21;
        a21 = cur22 + 12262;
        a34 = a34 + 3;
        darr[i] = a34;
        if (cur22 <= -48) {
        cur22 = cur22 - 4;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

