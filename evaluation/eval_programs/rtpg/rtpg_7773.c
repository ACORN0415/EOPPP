// RTPG_7773: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int dat36 = 1176;
    int x72 = 20842;
    float z77 = 41.58;
    int a79 = 6;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 14; i++) {
        dat36 = z77 & x72;
        dat36 = dat36;
        dat36 = a79;
        z77 = dat36 - a79;
        darr[i] = dat36;
        if (z77 > 67) {
        dat36 = dat36 + 5;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

