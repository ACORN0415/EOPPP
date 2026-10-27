// RTPG_7296: vars=4 stmts=9
#include <stdlib.h>
void test_func(void) {
    int sum82 = 3;
    int lo39 = 17751;
    int hi60 = -34;
    int val96 = -16;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 69; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        val96 = val96 - 3;
        sum82 = lo39;
        val96 = val96 - 42;
        sum82 = val96 + 4;
        hi60 = hi60 + lo39;
        hi60 = hi60 + sum82;
        sum82 = sum82 - hi60;
        sum82 = hi60 - val96;
        lo39 = lo39 - 8496;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

