// RTPG_2083: vars=6 stmts=2
int xn[32];
int yo[32];
int idx_arr[32];
enum State { OFF, RED, SLOW };
#include <stdlib.h>
void test_func(void) {
    int x79 = 22;
    int a65 = 10;
    int cur58 = 14320;
    int v34 = 23;
    int z34 = 35;
    int lo48 = 53;
    enum State st = OFF;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        lo48 = xn[i];
        x79 = xn[idx_arr[i]];
        x79 = a65 - v34;
        x79 = lo48 - cur58;
        darr[i] = lo48;
        if (a65 <= 71) {
        lo48 = v34 - 8;
        }
        yo[i] = x79;
    }
    free(darr);
}
int main() { test_func(); return 0; }

