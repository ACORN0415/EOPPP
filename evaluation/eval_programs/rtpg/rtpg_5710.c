// RTPG_5710: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int acc0 = -22;
    int lo7 = 97;
    int cur68 = 9305;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 7; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        lo7 = lo7 - cur68;
        acc0 = acc0 + acc0;
        lo7 = cur68 + 39;
        cur68 = cur68 + 8;
        lo7 = lo7 - 4;
        cur68 = cur68 + acc0;
        cur68 = lo7 - acc0;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

