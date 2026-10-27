// RTPG_3752: vars=5 stmts=5
#include <stdlib.h>
void test_func(void) {
    int lo25 = 88;
    int v9 = 51592;
    int res10 = -15;
    int sum99 = 52872;
    int prev4 = 1;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        switch (lo25) {
            case 0: res10 = 1; break;
            case 1: lo25 = 10; break;
            case 2: lo25 = 60580; break;
            case 3: prev4 = 27698; break;
            default: break;
        }
        lo25 = lo25 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

