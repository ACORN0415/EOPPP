// RTPG_1223: vars=8 stmts=4
int xn[32];
int yo[32];
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int b78 = -48;
    int val77 = 15;
    int x7 = -13;
    int y73 = 83;
    int out21 = 2306;
    int dat43 = 64666;
    int out63 = 62211;
    int hi42 = 6;
    struct Point s; s.a = 3; s.b = 45;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        y73 = xn[i];
        dat43 = x7 % b78;
        val77 = val77 - 2;
        out63 = out63;
        b78 = out21 + y73;
        s.a = s.a + s.b;
        darr[i] = out21;
        if (b78 <= 71) {
        out21 = out21 - out21;
        }
        yo[i] = out63;
    }
    free(darr);
}
int main() { test_func(); return 0; }

