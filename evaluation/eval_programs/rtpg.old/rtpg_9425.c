// RTPG_9425: vars=10 stmts=2
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int c85 = 30;
    int val8 = 5;
    int v0 = -50;
    int out83 = 31505;
    int v95 = 9;
    int x21 = 7;
    int prev49 = 14;
    int lo0 = -24;
    int x30 = 21586;
    int cur4 = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 92; i++) {
        c85 = xn[idx_arr[i]];
        out83 = c85 + lo0;
        v95 = v0 - x30;
        darr[i] = cur4;
    }
    free(darr);
}
int main() { test_func(); return 0; }

