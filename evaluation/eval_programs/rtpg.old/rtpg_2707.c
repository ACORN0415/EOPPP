// RTPG_2707: vars=7 stmts=7
#include <stdlib.h>
void test_func(void) {
    int acc16 = -50;
    int v83 = 63688;
    int c93 = 6;
    int res87 = 80;
    int dat75 = 6;
    int val71 = 3;
    int val48 = 23354;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 17369;
    int sv0 = 0;
    int h1 = 12;
    int sv1 = 0;
    int i;
    for (i = 0; i < 87; i++) {
        res87 = dat75 - res87;
        c93 = v83 * 11;
        res87 = res87;
        v83 = val48 * 60243;
        c93 = dat75 + acc16;
        dat75 = val71 * 9;
        c93 = v83 * 0;
        darr[i] = val48;
    }
    free(darr);
}
int main() { test_func(); return 0; }

