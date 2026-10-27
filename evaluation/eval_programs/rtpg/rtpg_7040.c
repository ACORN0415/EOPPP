// RTPG_7040: vars=7 stmts=3
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    double out23 = 12.78;
    int dat18 = 76;
    int a61 = 6;
    int lo97 = -37;
    double lo52 = 73.95;
    int b43 = -15;
    int c92 = 45848;
    struct Data s; s.a = 6; s.b = 61;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 68; i++) {
        lo97 = lo52 - 72;
        out23 = out23 - 3;
        out23 = b43 - 52876;
        s.a = s.a + s.b;
        darr[i] = out23;
        if (dat18 <= -43) {
        dat18 = out23 + lo52;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

