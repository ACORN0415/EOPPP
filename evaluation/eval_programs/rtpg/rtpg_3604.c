// RTPG_3604: vars=7 stmts=4
#include <stdlib.h>
void test_func(void) {
    int z92 = 96;
    int lo56 = 10;
    int b15 = 4;
    int sum35 = 67;
    int cur24 = 34245;
    int acc10 = 52;
    int acc21 = -17;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 43; i++) {
        z92 = z92 - 3;
        acc21 = z92 - -34;
        cur24 = b15 + lo56;
        acc21 = acc21 - acc21;
        darr[i] = lo56;
        if (lo56 > 62) {
        acc21 = acc21 - 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

