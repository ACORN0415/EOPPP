// RTPG_4529: vars=6 stmts=2
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int sum66 = -7;
    int lo2 = 99;
    float val51 = 55.20;
    double y95 = 87.90;
    int x68 = 45;
    double tmp18 = 54.61;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 78; i++) {
        x68 = xn[idx_arr[i]];
        x68 = y95;
        val51 = val51 + 91;
        darr[i] = tmp18;
        if (tmp18 == 77) {
        y95 = sum66 + val51;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

