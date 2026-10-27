// RTPG_1839: vars=7 stmts=6
#include <stdlib.h>
void test_func(void) {
    int lo23 = 33;
    int cnt67 = 68;
    int out91 = 25;
    int prev6 = 17;
    int cur8 = 25199;
    int prev68 = 6662;
    int acc83 = 76;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 30; i++) {
        lo23 = prev6 + 11;
        acc83 = acc83 + 5;
        acc83 = acc83 - 1;
        prev68 = out91 + 29;
        cur8 = out91 + prev68;
        prev6 = lo23 - out91;
        darr[i] = prev68;
    }
    free(darr);
}
int main() { test_func(); return 0; }

