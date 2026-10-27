// RTPG_1995: vars=4 stmts=3
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int cur25 = 1;
    int val5 = 23323;
    int dat14 = 39;
    int val24 = 34;
    struct Point s; s.a = 29160; s.b = 93;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 90; i++) {
        val5 = dat14 + 41;
        val24 = val24 - 2;
        dat14 = cur25 - val24;
        s.a = s.a + s.b;
        darr[i] = cur25;
    }
    free(darr);
}
int main() { test_func(); return 0; }

