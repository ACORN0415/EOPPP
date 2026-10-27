// RTPG_722: vars=7 stmts=7
#include <stdlib.h>
void test_func(void) {
    int v62 = 7;
    int cur88 = 1;
    int b70 = 19;
    int y55 = 52;
    int a40 = 4;
    int c7 = 21981;
    int tmp99 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 91; i++) {
        v62 = v62 - 54;
        b70 = y55;
        c7 = cur88 + v62;
        a40 = tmp99 - v62;
        c7 = c7 + 3;
        b70 = b70 - 3;
        cur88 = cur88 - 2;
        darr[i] = cur88;
        if (v62 <= 87) {
        a40 = a40 + 2;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

