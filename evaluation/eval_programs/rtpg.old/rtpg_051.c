// RTPG_51: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int v61 = 31691;
    int v3 = 25;
    int x89 = 7;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 63; i++) {
        v61 = x89 - 10;
        v61 = x89;
        v3 = v3 + v61;
        x89 = v3 - x89;
        v61 = v3 - x89;
        v61 = x89 + v3;
        x89 = x89;
        v61 = x89;
        v3 = v61 - v3;
        darr[i] = v3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

