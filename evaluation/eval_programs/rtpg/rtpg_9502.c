// RTPG_9502: vars=9 stmts=6
#include <stdlib.h>
void test_func(void) {
    int dat80 = 17660;
    int acc30 = 0;
    int b89 = 9;
    int hi24 = 6;
    int b69 = 38;
    int sum51 = 9;
    int a32 = 8;
    int a98 = 72;
    int hi62 = 92;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 96; i++) {
        hi24 = b69 + dat80;
        dat80 = b69 + b89;
        b69 = sum51;
        a98 = hi62;
        b89 = a32;
        b89 = sum51 + 6;
        darr[i] = sum51;
    }
    free(darr);
}
int main() { test_func(); return 0; }

