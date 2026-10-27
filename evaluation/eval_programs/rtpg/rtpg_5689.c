// RTPG_5689: vars=10 stmts=3
#include <stdlib.h>
void test_func(void) {
    int acc0 = 10541;
    int dat11 = 303;
    int y69 = 28;
    int acc74 = 9;
    int z65 = 8;
    int y47 = -11;
    int a54 = 9;
    int z95 = 20452;
    int hi18 = 17949;
    int cur79 = 15;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 17; i++) {
        z65 = acc74 - acc0;
        dat11 = a54 - acc74;
        z95 = z95 - z95;
        darr[i] = acc0;
    }
    free(darr);
}
int main() { test_func(); return 0; }

