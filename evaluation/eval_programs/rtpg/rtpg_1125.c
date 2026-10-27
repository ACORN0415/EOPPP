// RTPG_1125: vars=5 stmts=2
#include <stdlib.h>
void test_func(void) {
    float y61 = 86.72;
    int out56 = 1212;
    int y62 = 59854;
    int prev87 = 1;
    int res12 = -32;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 69;
    int sv0 = 0;
    int h1 = 3;
    int sv1 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        y62 = res12 - y61;
        y61 = y61 * 8;
        darr[i] = out56;
    }
    free(darr);
}
int main() { test_func(); return 0; }

