// RTPG_5429: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int x73 = 44320;
    int z83 = 17583;
    double val27 = 57.20;
    int out58 = 59069;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 61; i++) {
        x73 = val27 + 26;
        x73 = x73 - 4;
        z83 = x73 + 15;
        x73 = x73 + 3;
        darr[i] = val27;
    }
    free(darr);
}
int main() { test_func(); return 0; }

