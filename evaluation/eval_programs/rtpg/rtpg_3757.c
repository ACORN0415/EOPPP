// RTPG_3757: vars=5 stmts=2
#include <stdlib.h>
void test_func(void) {
    int v78 = -47;
    int res47 = 79;
    int hi51 = 46322;
    int y1 = 31887;
    int res46 = 4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 39; i++) {
        v78 = y1;
        y1 = y1 + 1;
        darr[i] = v78;
    }
    free(darr);
}
int main() { test_func(); return 0; }

