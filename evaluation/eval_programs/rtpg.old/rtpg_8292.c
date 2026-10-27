// RTPG_8292: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int z9 = 7810;
    int dat61 = 31;
    int out56 = 63;
    int x29 = 0;
    int x23 = 12955;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 67; i++) {
        x29 = x29 + 4;
        dat61 = dat61 + 5;
        x23 = z9 - x29;
        darr[i] = z9;
    }
    free(darr);
}
int main() { test_func(); return 0; }

