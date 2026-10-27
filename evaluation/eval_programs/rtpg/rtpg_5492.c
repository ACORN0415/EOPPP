// RTPG_5492: vars=4 stmts=3
#include <stdlib.h>
void test_func(void) {
    int out37 = -1;
    int c18 = 68;
    int v95 = 65;
    int tmp56 = -41;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 98; i++) {
        v95 = v95 - 5;
        tmp56 = tmp56 + 5;
        v95 = out37 - 34;
        darr[i] = tmp56;
    }
    free(darr);
}
int main() { test_func(); return 0; }

