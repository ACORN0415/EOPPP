// RTPG_7224: vars=3 stmts=3
#include <stdlib.h>
void test_func(void) {
    int cnt74 = 59721;
    int b52 = 45745;
    int res50 = 4565;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 69; i++) {
        b52 = cnt74 + b52;
        cnt74 = cnt74 | res50;
        cnt74 = b52 - cnt74;
        darr[i] = res50;
    }
    free(darr);
}
int main() { test_func(); return 0; }

