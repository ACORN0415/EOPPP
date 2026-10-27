// RTPG_5540: vars=6 stmts=7
#include <stdlib.h>
void test_func(void) {
    int res20 = -31;
    int y65 = -30;
    int sum80 = 6;
    int x71 = 1;
    int lo65 = 62906;
    int a24 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 85; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        x71 = x71 + 4;
        res20 = y65 + sum80;
        y65 = lo65 + lo65;
        a24 = sum80 + a24;
        sum80 = sum80;
        x71 = a24 - -21;
        a24 = a24 + -42;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

