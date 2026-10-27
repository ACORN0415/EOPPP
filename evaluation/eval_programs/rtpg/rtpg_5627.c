// RTPG_5627: vars=6 stmts=7
#include <stdlib.h>
void test_func(void) {
    int a24 = -31;
    int x71 = -30;
    int y65 = 6;
    int sum80 = 1;
    int res20 = 62906;
    int lo65 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 85; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        sum80 = sum80 + 4;
        a24 = x71 + y65;
        x71 = res20 + res20;
        lo65 = y65 + lo65;
        y65 = y65;
        sum80 = lo65 - -21;
        lo65 = lo65 + -42;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

