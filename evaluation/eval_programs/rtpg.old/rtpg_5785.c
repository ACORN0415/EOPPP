// RTPG_5785: vars=8 stmts=6
#include <stdlib.h>
void test_func(void) {
    int cnt19 = 10900;
    int z4 = 37;
    int prev86 = 7;
    int hi91 = 24;
    int lo99 = -48;
    int sum82 = -23;
    int acc67 = 1;
    int cur75 = 76;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 94; i++) {
        z4 = lo99 + cnt19;
        z4 = cur75;
        lo99 = acc67 + acc67;
        z4 = acc67 + cur75;
        hi91 = hi91 + 4;
        z4 = hi91 - 9;
        darr[i] = cnt19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

