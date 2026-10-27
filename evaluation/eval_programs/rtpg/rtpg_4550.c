// RTPG_4550: vars=3 stmts=2
#include <stdlib.h>
void test_func(void) {
    int a45 = 7;
    int tmp65 = 17;
    int a17 = 197;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 90; i++) {
        tmp65 = a17;
        tmp65 = tmp65;
        darr[i] = a17;
    }
    free(darr);
}
int main() { test_func(); return 0; }

