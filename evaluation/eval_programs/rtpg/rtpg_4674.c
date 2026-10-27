// RTPG_4674: vars=4 stmts=12
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int a89 = -48;
    int hi70 = 59582;
    int z54 = -17;
    int prev98 = 2;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        z54 = xn[i];
        z54 = hi70 - a89;
        z54 = prev98 - z54;
        z54 = z54 - prev98;
        z54 = hi70;
        z54 = z54 + hi70;
        a89 = a89;
        prev98 = prev98 + 4;
        prev98 = prev98 + 2;
        z54 = prev98 - 10;
        hi70 = prev98 - a89;
        hi70 = a89 + 2249;
        a89 = a89 - 5;
        darr[i] = hi70;
        if (hi70 >= 30) {
        hi70 = prev98 + 10;
        }
        yo[i] = prev98;
    }
    free(darr);
}
int main() { test_func(); return 0; }

