// RTPG_4913: vars=7 stmts=3
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int acc33 = 9;
    int sum83 = -7;
    int cnt41 = 14;
    int b77 = 40;
    int hi26 = 11;
    int sum3 = 52125;
    int a24 = 4674;
    struct Data s; s.a = 44182; s.b = 51480;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 65; i++) {
        cnt41 = b77 - 22;
        b77 = hi26;
        b77 = sum83 + 7398;
        s.a = s.a + s.b;
        darr[i] = a24;
        if (hi26 <= 53) {
        sum83 = sum83 - acc33;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

