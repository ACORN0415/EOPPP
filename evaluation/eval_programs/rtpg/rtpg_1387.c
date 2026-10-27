// RTPG_1387: vars=4 stmts=5
#include <stdlib.h>
void test_func(void) {
    int x48 = 75;
    int sum3 = 7;
    int acc12 = 4;
    int z24 = -29;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 62; i++) {
        x48 = z24 - 11;
        sum3 = acc12 + 20;
        z24 = z24 - 47698;
        z24 = z24 + 1;
        acc12 = x48 + z24;
        darr[i] = x48;
        if (acc12 != 22) {
        z24 = sum3 + sum3;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

