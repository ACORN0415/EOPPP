// RTPG_3173: vars=8 stmts=7
int xn[16];
int yo[16];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int prev98 = 7;
    int c86 = 6;
    int dat76 = 23741;
    int prev63 = 14505;
    int a21 = 49244;
    int res12 = 49;
    int dat70 = 33725;
    int tmp95 = -49;
    struct Data s; s.a = 63672; s.b = 11;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 86;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        prev98 = xn[i];
        a21 = a21 * 40;
        tmp95 = dat76 - tmp95;
        dat70 = tmp95 + dat70;
        a21 = a21 + 1;
        dat70 = a21;
        c86 = c86 + 2;
        res12 = res12 + a21;
        s.a = s.a + s.b;
        darr[i] = res12;
        if (dat76 > 86) {
        prev63 = prev63 - 3;
        }
        yo[i] = prev63;
    }
    free(darr);
}
int main() { test_func(); return 0; }

