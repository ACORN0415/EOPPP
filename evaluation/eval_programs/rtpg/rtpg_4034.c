// RTPG_4034: vars=4 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int cur18 = 42;
    float out79 = 98.57;
    double cnt16 = 54.67;
    int tmp12 = 34114;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        out79 = xn[i];
        tmp12 = cur18;
        out79 = cnt16 - out79;
        cur18 = tmp12 + 8;
        cnt16 = cur18 - cur18;
        darr[i] = cur18;
        yo[i] = cur18;
    }
    free(darr);
}
int main() { test_func(); return 0; }

