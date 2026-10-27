// RTPG_9760: vars=3 stmts=11
#include <stdlib.h>
void test_func(void) {
    int b53 = 64;
    int a72 = 30;
    int cnt37 = -35;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 8; i++) {
        b53 = b53;
        cnt37 = a72 - b53;
        b53 = b53 - 3;
        a72 = a72;
        b53 = b53 - a72;
        cnt37 = cnt37 - 4;
        b53 = b53;
        cnt37 = cnt37 + cnt37;
        a72 = a72 + 4;
        a72 = b53 - a72;
        a72 = a72 - b53;
        darr[i] = cnt37;
        if (a72 == 21) {
        b53 = b53 - 1;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

