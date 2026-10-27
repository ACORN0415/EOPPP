// RTPG_9152: vars=17 stmts=7
int idx_arr[32];
#include <stdlib.h>
void test_func(void) {
    int val92 = 77;
    int prev27 = 13474;
    int lo82 = 46;
    int x0 = 9;
    int prev6 = 49;
    int tmp33 = 9;
    int val38 = 6;
    int cnt39 = 25;
    int z86 = 90;
    int c39 = 33;
    int v29 = 7;
    int val55 = 9;
    int prev90 = 95;
    int res4 = 3;
    int a3 = -47;
    int out27 = 13;
    int z8 = 12026;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 80; i++) {
        prev6 = xn[idx_arr[i]];
        c39 = z86 - val55;
        lo82 = lo82 - prev6;
        res4 = tmp33 - 36;
        prev6 = x0 + 6;
        z86 = out27 + cnt39;
        x0 = a3 + 68;
        z86 = v29;
        darr[i] = cnt39;
    }
    free(darr);
}
int main() { test_func(); return 0; }

