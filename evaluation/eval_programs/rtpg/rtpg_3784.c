// RTPG_3784: vars=3 stmts=12
#include <stdlib.h>
void test_func(void) {
    int val60 = 10;
    int acc91 = 47964;
    int cnt35 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 6; i++) {
        val60 = val60 - 5;
        cnt35 = acc91 - acc91;
        val60 = acc91 + 9;
        val60 = val60 + cnt35;
        cnt35 = acc91 + val60;
        acc91 = acc91 - 8949;
        acc91 = val60 + val60;
        cnt35 = cnt35 - acc91;
        acc91 = cnt35 - 41;
        cnt35 = acc91 + val60;
        cnt35 = cnt35;
        acc91 = acc91 + 4;
        darr[i] = cnt35;
    }
    free(darr);
}
int main() { test_func(); return 0; }

