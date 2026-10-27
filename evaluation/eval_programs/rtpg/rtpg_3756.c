// RTPG_3756: vars=5 stmts=7
#include <stdlib.h>
void test_func(void) {
    int prev42 = 14401;
    int lo84 = 9;
    int tmp37 = 43;
    int y5 = 3;
    int z74 = 52;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 7;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int i;
    for (i = 0; i < 27; i++) {
        tmp37 = lo84;
        lo84 = z74 * 17263;
        z74 = tmp37 + tmp37;
        z74 = tmp37 * 14330;
        z74 = prev42 - y5;
        tmp37 = tmp37 * 6;
        z74 = tmp37;
        darr[i] = y5;
        if (z74 > 28) {
        prev42 = y5 + lo84;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

