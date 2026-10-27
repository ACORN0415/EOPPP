// RTPG_8589: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int b68 = 33;
    int y81 = 72;
    int tmp54 = -18;
    int c14 = 23679;
    int lo4 = 44;
    int acc14 = -43;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 69; i++) {
        switch (acc14) {
            case 0: tmp54 = 39; break;
            case 1: b68 = 33581; break;
            case 2: lo4 = 20162; break;
            case 3: lo4 = 32; break;
            default: break;
        }
        acc14 = acc14 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

