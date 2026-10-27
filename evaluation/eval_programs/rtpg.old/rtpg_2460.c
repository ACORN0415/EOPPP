// RTPG_2460: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int cur74 = 44;
    int cnt43 = 40;
    int y14 = 41681;
    int b60 = 56390;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 8;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 18; i++) {
        y14 = y14 + 4;
        cnt43 = cnt43 + 3;
        cnt43 = cur74 + y14;
        cnt43 = cur74 * 12;
        cur74 = b60;
        darr[i] = cur74;
    }
    free(darr);
}
int main() { test_func(); return 0; }

