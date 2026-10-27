// RTPG_7522: vars=5 stmts=10
int xn[16];
int yo[16];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int v83 = -45;
    int v35 = 0;
    int cur55 = 900;
    int hi32 = 62630;
    int val75 = 8;
    struct Data s; s.a = -8; s.b = 12513;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        v35 = xn[i];
        hi32 = cur55 + v83;
        v83 = v83 + 4;
        val75 = hi32 - val75;
        v83 = v35 + 39167;
        v35 = v35;
        val75 = hi32 - hi32;
        v35 = v83 - -14;
        cur55 = cur55 + 5;
        v83 = cur55 + val75;
        v83 = hi32 + val75;
        s.a = s.a + s.b;
        darr[i] = cur55;
        yo[i] = v35;
    }
done:
    v35 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

