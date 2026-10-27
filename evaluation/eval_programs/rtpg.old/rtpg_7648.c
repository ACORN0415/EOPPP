// RTPG_7648: vars=8 stmts=7
#include <stdlib.h>
void test_func(void) {
    int out97 = 7;
    float dat2 = 84.87;
    int sum73 = 4;
    int y35 = 63;
    int c58 = 32796;
    int y11 = 6;
    int val42 = 35;
    float out7 = 23.60;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -31;
    int sv0 = 0;
    int h1 = 62058;
    int sv1 = 0;
    int i;
    for (i = 0; i < 78; i++) {
        y35 = dat2 + y11;
        y11 = sum73 * 7;
        sum73 = y35 * 5;
        val42 = y11 - val42;
        dat2 = sum73 * -2;
        sum73 = out97 - 58140;
        sum73 = y11 + sum73;
        darr[i] = out97;
    }
    free(darr);
}
int main() { test_func(); return 0; }

