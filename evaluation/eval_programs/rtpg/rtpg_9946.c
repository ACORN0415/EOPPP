// RTPG_9946: vars=3 stmts=6
#include <stdlib.h>
void test_func(void) {
    int tmp12 = 33;
    int x46 = 49;
    int tmp84 = 52354;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 37; i++) {
        tmp12 = x46 - tmp12;
        tmp12 = tmp12;
        tmp84 = tmp84;
        tmp12 = tmp12;
        x46 = x46;
        tmp12 = tmp12;
        darr[i] = tmp84;
    }
    free(darr);
}
int main() { test_func(); return 0; }

