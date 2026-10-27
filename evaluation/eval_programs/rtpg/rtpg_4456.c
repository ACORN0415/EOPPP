// RTPG_4456: vars=5 stmts=8
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int acc24 = -17;
    int cur5 = 1;
    int c57 = 73;
    int hi22 = 10;
    int tmp43 = 0;
    struct Point s; s.a = 88; s.b = 18144;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -34;
    int sv0 = 0;
    int h1 = 35394;
    int sv1 = 0;
    int i;
    for (i = 0; i < 73; i++) {
        c57 = c57 * -40;
        acc24 = c57 - tmp43;
        cur5 = cur5 + 73;
        hi22 = acc24;
        hi22 = hi22 * 658;
        cur5 = tmp43 * 6971;
        acc24 = c57 + hi22;
        hi22 = tmp43 + cur5;
        s.a = s.a + s.b;
        darr[i] = tmp43;
    }
    free(darr);
}
int main() { test_func(); return 0; }

