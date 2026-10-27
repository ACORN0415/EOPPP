// RTPG_6606: vars=8 stmts=2
int xn[16];
int yo[16];
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int v1 = 29;
    int v37 = 30;
    int res92 = 57709;
    int c4 = -50;
    int v88 = 40;
    int out99 = 6;
    int v50 = 3047;
    int tmp67 = 4;
    struct Point s; s.a = 0; s.b = 11;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        v1 = xn[i];
        tmp67 = v37 + res92;
        v88 = c4 + res92;
        s.a = s.a + s.b;
        darr[i] = res92;
        if (v1 >= 84) {
        out99 = v37 - v1;
        }
        yo[i] = v88;
    }
    free(darr);
}
int main() { test_func(); return 0; }

