// RTPG_9300: vars=7 stmts=10
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int prev51 = 73;
    int a10 = 21;
    int acc86 = 3;
    int cur20 = 15;
    int sum40 = -7;
    int x58 = 3;
    int val96 = 8;
    struct Point s; s.a = 26; s.b = 38051;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        val96 = a10 + x58;
        x58 = x58 + 1;
        sum40 = prev51;
        x58 = prev51 - 61;
        sum40 = val96 - prev51;
        val96 = sum40 + 10;
        a10 = a10 + 11479;
        x58 = sum40 - x58;
        prev51 = prev51 - 4;
        a10 = a10 + 3;
        s.a = s.a + s.b;
        darr[i] = x58;
    }
    free(darr);
}
int main() { test_func(); return 0; }

