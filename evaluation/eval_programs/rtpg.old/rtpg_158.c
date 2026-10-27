// RTPG_158: vars=5 stmts=5
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    double res82 = 73.13;
    int cnt7 = 8;
    float sum34 = 58.39;
    int v5 = 63543;
    double b27 = 33.66;
    struct Node s; s.a = 21; s.b = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 42; i++) {
        sum34 = v5 + sum34;
        v5 = sum34 - res82;
        v5 = b27 - -48;
        v5 = cnt7 - sum34;
        cnt7 = cnt7 + sum34;
        s.a = s.a + s.b;
        darr[i] = b27;
        if (b27 > 35) {
        b27 = b27;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

