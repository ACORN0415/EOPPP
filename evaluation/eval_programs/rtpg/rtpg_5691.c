// RTPG_5691: vars=5 stmts=3
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int hi11 = 43933;
    int acc67 = 8;
    int sum59 = 74;
    int a88 = 50484;
    int acc71 = 46;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        a88 = xn[i];
        sum59 = sum59 + 4;
        acc71 = acc67 - sum59;
        sum59 = sum59 + 3;
        darr[i] = acc67;
        yo[i] = acc67;
    }
    free(darr);
}
int main() { test_func(); return 0; }

