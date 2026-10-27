// RTPG_1941: vars=6 stmts=4
struct Pair { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int z71 = 1;
    int acc9 = 27033;
    int val37 = 2;
    int acc41 = 24025;
    int sum25 = 5918;
    int hi41 = 56152;
    struct Pair s; s.a = 23065; s.b = 1;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 74; i++) {
        z71 = hi41 + acc41;
        val37 = acc9 / acc41;
        acc9 = acc9 - 3;
        val37 = z71 + acc9;
        s.a = s.a + s.b;
        darr[i] = acc9;
    }
    free(darr);
}
int main() { test_func(); return 0; }

