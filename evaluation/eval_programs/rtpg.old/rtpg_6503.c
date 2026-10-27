// RTPG_6503: vars=5 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int prev40 = 49;
    int tmp55 = 27747;
    int out87 = -19;
    int res94 = 5;
    int z59 = 63;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        prev40 = xn[i];
        res94 = prev40 + 7;
        out87 = out87 - 3;
        darr[i] = res94;
        yo[i] = z59;
    }
    free(darr);
}
int main() { test_func(); return 0; }

