// RTPG_6749: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int dat0 = 1;
    int cnt50 = -22;
    int prev89 = 3599;
    int c66 = 17;
    int tmp7 = 14883;
    int out25 = 98;
    int cnt81 = 19;
    int res64 = 2;
    int sum58 = 24098;
    int hi93 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        out25 = prev89 | tmp7;
        dat0 = cnt81 | dat0;
        out25 = cnt50 + dat0;
        tmp7 = tmp7 - sum58;
        darr[i] = prev89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

