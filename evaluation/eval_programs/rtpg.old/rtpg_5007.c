// RTPG_5007: vars=9 stmts=2
struct Data { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int c78 = 16;
    int cnt97 = 8;
    int x57 = -16;
    double tmp63 = 28.52;
    int tmp96 = 54736;
    double lo9 = 70.00;
    int lo84 = -39;
    double cnt76 = 70.00;
    int cnt72 = 28105;
    struct Data s; s.a = -27; s.b = 30464;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 63; i++) {
        switch (tmp96) {
            case 0: c78 = 35503; break;
            case 1: lo84 = 54; break;
            default: break;
        }
        tmp96 = tmp96 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

