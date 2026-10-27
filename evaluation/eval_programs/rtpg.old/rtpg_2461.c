// RTPG_2461: vars=3 stmts=4
int idx_arr[64];
struct Point { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int out30 = 54495;
    int v64 = -41;
    int a85 = 14;
    struct Point s; s.a = 18; s.b = 25;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 90; i++) {
        v64 = xn[idx_arr[i]];
        v64 = v64 + out30;
        a85 = a85 - out30;
        v64 = a85 + 2;
        v64 = v64;
        s.a = s.a + s.b;
        darr[i] = a85;
    }
    free(darr);
}
int main() { test_func(); return 0; }

