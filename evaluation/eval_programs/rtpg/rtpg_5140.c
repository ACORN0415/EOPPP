// RTPG_5140: vars=7 stmts=3
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int prev49 = 34;
    int acc92 = 18244;
    int prev94 = 1;
    int c74 = 6;
    int val33 = 5;
    int dat86 = -41;
    int tmp68 = 20711;
    struct Node s; s.a = 5; s.b = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 40; i++) {
        tmp68 = val33 + dat86;
        prev49 = prev49;
        prev49 = c74 - 5;
        s.a = s.a + s.b;
        darr[i] = c74;
    }
    free(darr);
}
int main() { test_func(); return 0; }

