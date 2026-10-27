// RTPG_397: vars=9 stmts=8
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int tmp99 = 65;
    int v83 = 58;
    int tmp35 = 1;
    int hi30 = 1;
    int c55 = 43552;
    int z85 = 10;
    int sum88 = 100;
    int lo98 = 65527;
    int tmp72 = 46;
    struct Data s; s.a = 7; s.b = 1331;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 52; i++) {
        hi30 = z85 - hi30;
        c55 = v83;
        lo98 = lo98;
        tmp99 = tmp99 - 5;
        sum88 = v83 - tmp72;
        tmp35 = tmp72;
        z85 = z85 - 2;
        c55 = sum88 - 13680;
        s.a = s.a + s.b;
        darr[i] = tmp35;
        if (sum88 >= -5) {
        c55 = tmp72 - tmp35;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

