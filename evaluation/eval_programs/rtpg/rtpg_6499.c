// RTPG_6499: vars=4 stmts=10
int xn[64];
int yo[64];
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int c24 = 16;
    int acc30 = 41748;
    int sum52 = 44333;
    int hi93 = 3;
    struct Data s; s.a = 6; s.b = -29;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 36; i++) {
        switch (c24) {
            case 0: hi93 = 25; break;
            case 1: sum52 = 6; break;
            case 2: hi93 = -23; break;
            default: break;
        }
        c24 = c24 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

