// RTPG_8567: vars=8 stmts=7
int xn[64];
int yo[64];
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int sum26 = 1;
    int cnt86 = -16;
    int v9 = 28501;
    int a91 = 23;
    int dat38 = -45;
    int sum6 = 41524;
    int hi78 = 0;
    int acc22 = 0;
    struct Node s; s.a = -18; s.b = 60;
    int *ptr = &hi78;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 64; i++) {
        cnt86 = xn[i];
        sum26 = cnt86 + sum26;
        hi78 = sum26 - v9;
        a91 = a91 - 2;
        a91 = a91 + 2;
        sum26 = sum26 - dat38;
        hi78 = dat38;
        v9 = cnt86;
        *ptr = *ptr + 3;
        s.a = s.a + s.b;
        darr[i] = acc22;
        if (sum6 < 1) {
        sum26 = sum26 - 4;
        }
        yo[i] = sum26;
    }
    free(darr);
}
int main() { test_func(); return 0; }

