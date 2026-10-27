// RTPG_2970: vars=9 stmts=5
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int prev72 = 32228;
    int res67 = 95;
    int v39 = 54466;
    int out52 = 58341;
    int prev89 = 8;
    int c90 = -18;
    int a89 = 3;
    int b69 = 82;
    int out90 = 37518;
    struct Data s; s.a = 47; s.b = 9;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        prev72 = prev72 + 5;
        res67 = out52;
        a89 = v39 + prev72;
        prev89 = res67 - 6928;
        prev72 = prev72 + b69;
        s.a = s.a + s.b;
        darr[i] = a89;
    }
    free(darr);
}
int main() { test_func(); return 0; }

