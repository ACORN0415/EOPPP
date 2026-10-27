// RTPG_9096: vars=7 stmts=3
#include <stdlib.h>
void test_func(void) {
    int x3 = 92;
    int acc27 = 5;
    int a63 = 0;
    int a42 = 4243;
    int a19 = 1927;
    int z82 = 5;
    int y74 = 82;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        a42 = y74 - acc27;
        a63 = a63 + a42;
        acc27 = acc27;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

