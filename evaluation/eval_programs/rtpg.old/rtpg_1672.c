// RTPG_1672: vars=4 stmts=6
#include <stdlib.h>
void test_func(void) {
    int y36 = 4;
    int hi76 = 8;
    float prev11 = 58.09;
    int sum94 = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        y36 = y36 - 3;
        hi76 = y36;
        y36 = y36 - hi76;
        hi76 = hi76 - 11922;
        sum94 = hi76 - prev11;
        prev11 = sum94 + hi76;
        darr[i] = y36;
        if (hi76 == 2) {
        y36 = y36 + 1;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

