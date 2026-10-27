// RTPG_7578: vars=3 stmts=6
#include <stdlib.h>
void test_func(void) {
    int val15 = 10;
    int val69 = 56859;
    int y43 = 44;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 49; i++) {
        val15 = val15;
        y43 = val69;
        val69 = val15 - 13;
        val15 = val69 + val15;
        val15 = val15 + -43;
        val69 = val69 % y43;
        darr[i] = y43;
        if (val69 != 90) {
        val69 = y43 - val69;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

