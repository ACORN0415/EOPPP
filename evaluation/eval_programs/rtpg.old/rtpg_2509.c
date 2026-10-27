// RTPG_2509: vars=5 stmts=3
struct Pair { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int prev99 = 21716;
    int tmp86 = 77;
    int tmp46 = 14909;
    int tmp23 = 19640;
    int z39 = 15810;
    struct Pair s; s.a = 34; s.b = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = -46;
    int sv0 = 0;
    int h1 = 29;
    int sv1 = 0;
    int i;
    for (i = 0; i < 49; i++) {
        tmp23 = prev99;
        tmp86 = tmp23 * 50158;
        z39 = z39 - 3;
        s.a = s.a + s.b;
        darr[i] = tmp46;
    }
    free(darr);
}
int main() { test_func(); return 0; }

