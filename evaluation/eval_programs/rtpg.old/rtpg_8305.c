// RTPG_8305: vars=3 stmts=5
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int hi88 = 4;
    int cur36 = 31115;
    int dat3 = 47;
    struct Node s; s.a = 16834; s.b = 45350;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 46; i++) {
        dat3 = dat3 + -1;
        cur36 = dat3 - 15;
        hi88 = cur36 - -15;
        dat3 = hi88 - dat3;
        hi88 = dat3;
        s.a = s.a + s.b;
        darr[i] = cur36;
    }
    free(darr);
}
int main() { test_func(); return 0; }

