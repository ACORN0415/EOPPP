// RTPG_6924: vars=9 stmts=2
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int lo94 = 83;
    int b47 = 10170;
    int res31 = 3;
    int val45 = 46316;
    int z88 = -2;
    int dat30 = 39;
    int val58 = 48669;
    int c62 = 6;
    int cur12 = 0;
    struct Point s; s.a = 33767; s.b = 24151;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 52; i++) {
        val45 = lo94 + val45;
        lo94 = z88 + z88;
        s.a = s.a + s.b;
        darr[i] = cur12;
    }
    free(darr);
}
int main() { test_func(); return 0; }

