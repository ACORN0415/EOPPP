// RTPG_507: vars=6 stmts=5
#include <stdlib.h>
void test_func(void) {
    int sum17 = -44;
    int c59 = 60;
    int cnt62 = 11;
    int val51 = 8;
    int acc8 = 80;
    int cur43 = 25639;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 46; i++) {
        acc8 = acc8 + 4;
        val51 = sum17 | cnt62;
        cnt62 = cnt62 + 5;
        cur43 = acc8 - cur43;
        cur43 = cnt62 & acc8;
        darr[i] = val51;
    }
    free(darr);
}
int main() { test_func(); return 0; }

