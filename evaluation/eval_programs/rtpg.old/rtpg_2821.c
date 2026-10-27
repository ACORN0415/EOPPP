// RTPG_2821: vars=9 stmts=5
#include <stdlib.h>
void test_func(void) {
    int cur6 = 48;
    int cnt21 = 79;
    int v32 = 7;
    int lo36 = 82;
    int b72 = 28927;
    int acc74 = 99;
    int a57 = 42;
    int x3 = 60;
    int res84 = 17349;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 6; i++) {
        acc74 = lo36 + lo36;
        cnt21 = acc74 + lo36;
        b72 = a57;
        res84 = cnt21 - res84;
        lo36 = acc74;
        darr[i] = acc74;
    }
    free(darr);
}
int main() { test_func(); return 0; }

