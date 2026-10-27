// RTPG_812: vars=11 stmts=7
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int dat74 = 7;
    int x71 = 0;
    int prev82 = 25084;
    int a56 = 15;
    int hi82 = 18;
    int prev16 = 17;
    int dat13 = 34;
    int a1 = 4;
    int res84 = 4;
    int tmp92 = 39011;
    int c62 = 11153;
    struct Node s; s.a = 38; s.b = 29328;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 29; i++) {
        x71 = a1 - dat74;
        x71 = a1 + dat74;
        res84 = prev82 + hi82;
        c62 = c62;
        dat13 = prev16 + res84;
        prev82 = c62 - 24531;
        dat13 = dat13 - 4;
        s.a = s.a + s.b;
        darr[i] = a1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

