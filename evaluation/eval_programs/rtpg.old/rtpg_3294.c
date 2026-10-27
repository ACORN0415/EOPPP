// RTPG_3294: vars=14 stmts=2
struct Point { int a; int b; };
enum State { GREEN, SLOW, FAST };
#include <stdlib.h>
void test_func(void) {
    int res27 = 7508;
    int res73 = 91;
    int cur71 = 1228;
    int b8 = 39;
    int lo37 = 6;
    int cnt56 = 22280;
    int dat22 = 26720;
    int out21 = 11886;
    int c47 = 4;
    int y44 = -44;
    int acc75 = 31;
    int y5 = 37776;
    int dat41 = 10;
    float cur24 = 35.50;
    struct Point s; s.a = -28; s.b = 26;
    enum State st = GREEN;
    int *ptr = &cur71;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 46; i++) {
        cur71 = cnt56 + 4;
        b8 = cnt56 + dat41;
        *ptr = *ptr + 5;
        s.a = s.a + s.b;
        darr[i] = dat41;
    }
    free(darr);
}
int main() { test_func(); return 0; }

