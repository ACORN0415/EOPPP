// RTPG_428: vars=10 stmts=3
#include <stdlib.h>
void test_func(void) {
    float y93 = 69.72;
    int b46 = 5;
    int val99 = 82;
    double v8 = 75.55;
    int b77 = 20052;
    int val78 = 36699;
    int tmp56 = 8;
    int v30 = 1;
    int out84 = 59;
    double z72 = 82.17;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 10;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int h2 = -20;
    int sv2 = 0;
    int h3 = -38;
    int sv3 = 0;
    int i;
    for (i = 0; i < 34; i++) {
        v8 = v8 - 3;
        v30 = val78 * 19;
        val99 = y93;
        darr[i] = y93;
    }
    free(darr);
}
int main() { test_func(); return 0; }

