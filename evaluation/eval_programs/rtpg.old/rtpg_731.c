// RTPG_731: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int c76 = 43066;
    int res75 = 68;
    int cur43 = 18696;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 17;
    int sv0 = 0;
    int h1 = 52;
    int sv1 = 0;
    int i;
    for (i = 0; i < 92; i++) {
        cur43 = c76 + c76;
        c76 = cur43 * 53;
        c76 = c76 - 82;
        c76 = c76 * 46;
        c76 = res75 % res75;
        cur43 = c76 + 2;
        res75 = res75 - cur43;
        c76 = res75 | res75;
        res75 = c76 % cur43;
        darr[i] = cur43;
        if (cur43 == 35) {
        res75 = c76;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

