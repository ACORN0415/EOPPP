// RTPG_4376: vars=4 stmts=6
#include <stdlib.h>
void test_func(void) {
    int y72 = 1;
    int x18 = 38725;
    int sum98 = 84;
    int acc28 = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 52; i++) {
        int j;
        for (j = 0; j < 20; j++) {
        sum98 = y72 + sum98;
        y72 = y72 + sum98;
        y72 = y72 - 3;
        y72 = x18;
        y72 = acc28;
        sum98 = y72 - x18;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

