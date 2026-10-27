// RTPG_6370: vars=11 stmts=3
#include <stdlib.h>
void test_func(void) {
    int res3 = 21014;
    int y51 = -32;
    int c43 = 46;
    int val65 = 9;
    int val5 = 5;
    int a79 = -9;
    int tmp78 = 48622;
    int x38 = -27;
    int x95 = 36;
    int acc87 = -38;
    int a31 = 81;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 59;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        x95 = val5 - acc87;
        acc87 = acc87 + 84;
        x38 = res3 + val65;
        darr[i] = y51;
    }
    free(darr);
}
int main() { test_func(); return 0; }

