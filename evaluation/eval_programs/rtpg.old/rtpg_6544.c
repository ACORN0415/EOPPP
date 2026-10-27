// RTPG_6544: vars=3 stmts=10
#include <stdlib.h>
void test_func(void) {
    int cur66 = 0;
    int cnt17 = 2;
    int x6 = 9;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 100; i++) {
        cur66 = cur66 + 3;
        cnt17 = x6 + 41;
        x6 = cnt17 - x6;
        cnt17 = cnt17 - 5;
        cnt17 = cnt17 - cur66;
        cur66 = cur66;
        cur66 = cur66 - x6;
        x6 = x6 + cnt17;
        cnt17 = x6 - cur66;
        cur66 = cnt17 + cur66;
        darr[i] = cnt17;
    }
    free(darr);
}
int main() { test_func(); return 0; }

