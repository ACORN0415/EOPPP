// RTPG_778: vars=4 stmts=4
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    double z91 = 91.45;
    double lo22 = 32.72;
    int cur0 = 32;
    int lo33 = 4309;
    struct Point s; s.a = 32; s.b = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 47; i++) {
        z91 = z91 - 9;
        cur0 = cur0;
        z91 = cur0;
        lo22 = z91;
        s.a = s.a + s.b;
        darr[i] = lo33;
    }
    free(darr);
}
int main() { test_func(); return 0; }

