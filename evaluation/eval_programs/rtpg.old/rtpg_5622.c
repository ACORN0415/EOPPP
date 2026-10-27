// RTPG_5622: vars=7 stmts=4
#include <stdlib.h>
void test_func(void) {
    int c86 = 41035;
    int acc25 = 2;
    int out32 = 5;
    int v27 = -1;
    int z1 = 41332;
    int y77 = 7;
    int b34 = -36;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 5; i++) {
        z1 = z1 - 3;
        acc25 = acc25 + 1;
        z1 = v27 - 60;
        b34 = v27 + acc25;
        darr[i] = y77;
    }
    free(darr);
}
int main() { test_func(); return 0; }

