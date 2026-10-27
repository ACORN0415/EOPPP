// RTPG_1888: vars=6 stmts=5
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int x82 = 10;
    int res38 = 16;
    int a54 = 86;
    int res62 = 15;
    int val97 = 94;
    int dat45 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 1;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 100; i++) {
        dat45 = xn[idx_arr[i]];
        x82 = a54 * 40675;
        res62 = res62 - 5;
        a54 = res38 & a54;
        a54 = x82 - 51;
        val97 = val97 - 4;
        darr[i] = res38;
        if (x82 >= 70) {
        res38 = x82;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

