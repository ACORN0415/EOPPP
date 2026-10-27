// RTPG_6123: vars=6 stmts=12
int xn[32];
int yo[32];
enum State { ON, BLUE, RED };
#include <stdlib.h>
void test_func(void) {
    int cnt84 = 42427;
    int x67 = 6;
    int v98 = 10;
    int prev80 = 88;
    int res49 = 9;
    int x63 = 9;
    enum State st = ON;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        res49 = xn[i];
        v98 = res49;
        x67 = prev80 - v98;
        v98 = x67;
        res49 = cnt84 - 4;
        prev80 = res49;
        cnt84 = v98 - x63;
        v98 = prev80 - res49;
        res49 = cnt84 - cnt84;
        cnt84 = v98 + x63;
        prev80 = cnt84 - 47895;
        cnt84 = res49 + x67;
        x63 = x63 + 7083;
        darr[i] = res49;
        yo[i] = prev80;
    }
    free(darr);
}
int main() { test_func(); return 0; }

