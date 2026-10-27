// RTPG_2962: vars=9 stmts=5
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int v39 = 32228;
    int prev89 = 95;
    int res67 = 54466;
    int prev72 = 58341;
    int b69 = 8;
    int c90 = -18;
    int out52 = 3;
    int a89 = 82;
    int out90 = 37518;
    struct Data s; s.a = 47; s.b = 9;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        v39 = v39 + 5;
        prev89 = prev72;
        out52 = res67 + v39;
        b69 = prev89 - 6928;
        v39 = v39 + a89;
        s.a = s.a + s.b;
        darr[i] = out52;
    }
    free(darr);
}
int main() { test_func(); return 0; }

