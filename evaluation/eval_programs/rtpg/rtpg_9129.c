// RTPG_9129: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    float a61 = 70.38;
    int b39 = 3820;
    int c32 = 6;
    int v98 = 86;
    int res98 = 4;
    float lo97 = 54.81;
    int acc99 = 12;
    int sum52 = 27336;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 85; i++) {
        c32 = a61 % v98;
        a61 = a61 - 1;
        darr[i] = lo97;
    }
    free(darr);
}
int main() { test_func(); return 0; }

