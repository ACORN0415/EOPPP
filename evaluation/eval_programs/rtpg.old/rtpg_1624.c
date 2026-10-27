// RTPG_1624: vars=3 stmts=4
int xn[64];
int yo[64];
enum State { SLOW, BLUE, RED };
#include <stdlib.h>
void test_func(void) {
    float prev61 = 39.50;
    int a99 = 42;
    float a81 = 4.28;
    enum State st = SLOW;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        a81 = xn[i];
        prev61 = a81 - prev61;
        a81 = a81 - 2;
        prev61 = prev61 - 3;
        prev61 = a99 + a81;
        darr[i] = a99;
        if (a99 > 10) {
        a81 = a99 - prev61;
        }
        yo[i] = a81;
    }
    free(darr);
}
int main() { test_func(); return 0; }

