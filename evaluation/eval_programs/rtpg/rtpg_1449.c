// RTPG_1449: vars=3 stmts=3
#include <stdlib.h>
void test_func(void) {
    int x38 = 24;
    int y42 = 27;
    int sum6 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 22;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 53; i++) {
        sum6 = x38;
        sum6 = x38 + 8;
        sum6 = y42 + 15;
        darr[i] = sum6;
        if (y42 != 70) {
        sum6 = sum6 - 3;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

