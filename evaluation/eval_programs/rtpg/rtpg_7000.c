// RTPG_7000: vars=9 stmts=2
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int dat30 = 83;
    int res31 = 10170;
    int z88 = 3;
    int b47 = 46316;
    int lo94 = -2;
    int val58 = 39;
    int cur12 = 48669;
    int c62 = 6;
    int val45 = 0;
    struct Point s; s.a = 33767; s.b = 24151;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 52; i++) {
        b47 = dat30 + b47;
        dat30 = lo94 + lo94;
        s.a = s.a + s.b;
        darr[i] = val45;
    }
    free(darr);
}
int main() { test_func(); return 0; }

