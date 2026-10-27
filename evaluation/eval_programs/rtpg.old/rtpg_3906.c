// RTPG_3906: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int a6 = 38617;
    int sum66 = 9;
    int v85 = -42;
    int out30 = -48;
    int acc19 = 56;
    int val74 = 28;
    int v4 = -32;
    int a10 = 43659;
    int dat16 = 9753;
    int tmp93 = 23;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 9; i++) {
        v85 = v85 + 1;
        a6 = a10 - 19;
        tmp93 = tmp93 + 1;
        v85 = a6 + 56;
        darr[i] = acc19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

