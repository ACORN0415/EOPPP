// RTPG_9345: vars=8 stmts=4
#include <stdlib.h>
void test_func(void) {
    int tmp97 = 7;
    int val88 = 4;
    int v64 = -8;
    int v51 = 5;
    int dat3 = 8;
    int tmp16 = 4;
    int sum52 = 2;
    int c81 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 67; i++) {
        tmp97 = sum52 - tmp16;
        sum52 = tmp97 + 11;
        v64 = v51 + tmp97;
        v51 = v51 + 4;
        darr[i] = v64;
    }
    free(darr);
}
int main() { test_func(); return 0; }

