// RTPG_3339: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    double y40 = 92.57;
    int tmp69 = 8;
    int c55 = -11;
    int lo78 = 10;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 23;
    int sv0 = 0;
    int h1 = 10;
    int sv1 = 0;
    int i;
    for (i = 0; i < 76; i++) {
        lo78 = lo78 + 32;
        y40 = lo78 * -24;
        y40 = y40 + 5;
        c55 = c55 - 3;
        lo78 = lo78 - 5;
        darr[i] = c55;
    }
    free(darr);
}
int main() { test_func(); return 0; }

