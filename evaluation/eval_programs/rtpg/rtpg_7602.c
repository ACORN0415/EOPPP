// RTPG_7602: vars=5 stmts=10
int xn[16];
int yo[16];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int hi32 = -45;
    int v83 = 0;
    int v35 = 900;
    int val75 = 62630;
    int cur55 = 8;
    struct Data s; s.a = -8; s.b = 12513;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        v83 = xn[i];
        val75 = v35 + hi32;
        hi32 = hi32 + 4;
        cur55 = val75 - cur55;
        hi32 = v83 + 39167;
        v83 = v83;
        cur55 = val75 - val75;
        v83 = hi32 - -14;
        v35 = v35 + 5;
        hi32 = v35 + cur55;
        hi32 = val75 + cur55;
        s.a = s.a + s.b;
        darr[i] = v35;
        yo[i] = v83;
    }
    free(darr);
}
int main() { test_func(); return 0; }

