// RTPG_6813: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int b14 = 22;
    int c54 = -1;
    int hi91 = 4;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        b14 = c54 % c54;
        c54 = b14;
        c54 = c54 - 1;
        b14 = b14 + b14;
        b14 = b14;
        b14 = b14 + 1;
        hi91 = c54;
        darr[i] = c54;
        if (hi91 != -1) {
        hi91 = hi91;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

