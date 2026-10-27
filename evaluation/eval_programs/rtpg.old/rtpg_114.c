// RTPG_114: vars=6 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int res85 = -2;
    int acc16 = 86;
    int cnt30 = 7;
    int tmp96 = 0;
    int lo63 = 1;
    int out73 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 50; i++) {
        switch (tmp96) {
            case 0: res85 = 9; break;
            case 1: acc16 = 12094; break;
            case 2: lo63 = 14; break;
            case 3: lo63 = 44583; break;
            default: break;
        }
        tmp96 = tmp96 + 1;
    }
done:
    out73 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

