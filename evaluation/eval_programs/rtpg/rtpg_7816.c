// RTPG_7816: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int prev21 = 99;
    int lo28 = 36009;
    int x42 = 18;
    int dat16 = 47641;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 100;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        prev21 = x42 + prev21;
        x42 = prev21 - prev21;
        x42 = x42 + prev21;
        dat16 = dat16 * 38021;
        lo28 = dat16;
        darr[i] = dat16;
    }
    free(darr);
}
int main() { test_func(); return 0; }

