// RTPG_8382: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int cur10 = 34967;
    int cnt19 = 9;
    int b22 = 4;
    int y56 = 7;
    int *ptr = &b22;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 46; i++) {
        cnt19 = b22 - b22;
        cur10 = cur10 + 5;
        y56 = cnt19 + cur10;
        cur10 = y56 % cnt19;
        *ptr = *ptr + 3;
        darr[i] = cur10;
        if (cur10 >= 29) {
        cnt19 = b22;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

