// RTPG_9574: vars=10 stmts=8
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int out64 = 84;
    int dat21 = 4;
    int prev70 = 8;
    int b29 = 8;
    int out66 = -49;
    int dat5 = 9;
    int cur98 = 16984;
    int hi88 = 16757;
    int cnt41 = 6;
    int res40 = 48;
    struct Node s; s.a = 6; s.b = 6;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 99; i++) {
        cnt41 = out64 - out66;
        dat5 = hi88;
        out66 = hi88 + out66;
        hi88 = res40 + 46853;
        dat21 = out66;
        dat5 = cnt41 - b29;
        out64 = cnt41 + hi88;
        out66 = prev70 + hi88;
        s.a = s.a + s.b;
        darr[i] = cur98;
        if (dat21 == 91) {
        prev70 = prev70 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

