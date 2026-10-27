// RTPG_7376: vars=6 stmts=3
#include <stdlib.h>
void test_func(void) {
    int prev72 = 48119;
    int tmp32 = 55993;
    int x18 = 20116;
    int val29 = 10030;
    int b65 = -37;
    int a82 = -25;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 20; i++) {
        switch (a82) {
            case 0: tmp32 = 34177; break;
            case 1: prev72 = 9; break;
            case 2: val29 = 83; break;
            case 3: tmp32 = 17153; break;
            default: break;
        }
        a82 = a82 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

