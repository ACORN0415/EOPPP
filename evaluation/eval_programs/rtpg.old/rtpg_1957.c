// RTPG_1957: vars=5 stmts=12
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int prev9 = 51;
    int dat19 = 9;
    int dat65 = 29;
    int x16 = 0;
    int cnt70 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 39;
    int sv0 = 0;
    int h1 = 5;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        dat65 = xn[i];
        x16 = dat65 + x16;
        x16 = dat65 - dat19;
        prev9 = x16 - dat19;
        dat19 = dat19 + 3;
        dat65 = dat65 - 31;
        dat19 = dat65 * 56151;
        dat19 = dat19 + 5;
        x16 = cnt70 * 33056;
        dat19 = dat19 - 5;
        prev9 = prev9 + 1;
        cnt70 = dat65 + x16;
        dat65 = x16;
        darr[i] = prev9;
        yo[i] = dat19;
    }
    free(darr);
}
int main() { test_func(); return 0; }

