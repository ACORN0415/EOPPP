// RTPG_1237: vars=8 stmts=4
int xn[32];
int yo[32];
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int val77 = -48;
    int b78 = 15;
    int out63 = -13;
    int y73 = 83;
    int out21 = 2306;
    int dat43 = 64666;
    int hi42 = 62211;
    int x7 = 6;
    struct Point s; s.a = 3; s.b = 45;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        y73 = xn[i];
        dat43 = out63 % b78;
        b78 = b78 - 2;
        hi42 = hi42;
        val77 = out21 + y73;
        s.a = s.a + s.b;
        darr[i] = out21;
        if (val77 <= 71) {
        out21 = out21 - out21;
        }
        yo[i] = hi42;
    }
    free(darr);
}
int main() { test_func(); return 0; }

