// RTPG_7428: vars=9 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int dat10 = 3512;
    int val68 = 62;
    int prev72 = 10;
    int c69 = 20;
    int out39 = 62;
    int res92 = 60;
    int prev74 = 2;
    int z23 = 18191;
    int tmp62 = 15324;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        dat10 = xn[i];
        prev74 = res92 - prev74;
        prev74 = val68 % prev72;
        val68 = prev72 / dat10;
        res92 = prev74 + val68;
        darr[i] = val68;
        yo[i] = prev72;
    }
    free(darr);
}
int main() { test_func(); return 0; }

