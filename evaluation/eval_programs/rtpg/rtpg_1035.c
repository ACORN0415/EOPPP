// RTPG_1035: vars=5 stmts=6
#include <stdlib.h>
void test_func(void) {
    int sum98 = 50809;
    int c31 = 36;
    int a99 = 24047;
    int a97 = 9676;
    int dat90 = 39;
    int *ptr = &c31;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 39; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        sum98 = c31 - 9;
        sum98 = sum98 - 2;
        dat90 = a99 - c31;
        c31 = dat90;
        sum98 = sum98 - 5;
        a99 = a97;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

