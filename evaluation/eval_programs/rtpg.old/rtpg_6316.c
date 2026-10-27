// RTPG_6316: vars=6 stmts=7
#include <stdlib.h>
void test_func(void) {
    int val96 = 33;
    int prev77 = 20;
    int hi33 = 3;
    int tmp34 = 70;
    int a3 = -2;
    int res55 = 35289;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 34058;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int i;
    for (i = 0; i < 99; i++) {
        a3 = a3 - 1;
        prev77 = prev77 - tmp34;
        res55 = hi33 + 4315;
        val96 = hi33;
        res55 = tmp34 + res55;
        a3 = a3 - 4;
        res55 = a3 + tmp34;
        darr[i] = hi33;
    }
    free(darr);
}
int main() { test_func(); return 0; }

