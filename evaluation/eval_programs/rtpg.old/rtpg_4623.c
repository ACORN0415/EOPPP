// RTPG_4623: vars=4 stmts=12
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int prev98 = -48;
    int hi70 = 59582;
    int a89 = -17;
    int z54 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        a89 = xn[i];
        a89 = hi70 - prev98;
        a89 = z54 - a89;
        a89 = a89 - z54;
        a89 = hi70;
        a89 = a89 + hi70;
        prev98 = prev98;
        z54 = z54 + 4;
        z54 = z54 + 2;
        a89 = z54 - 10;
        hi70 = z54 - prev98;
        hi70 = prev98 + 2249;
        prev98 = prev98 - 5;
        darr[i] = hi70;
        if (hi70 >= 30) {
        hi70 = z54 + 10;
        }
        yo[i] = z54;
    }
    free(darr);
}
int main() { test_func(); return 0; }

