// RTPG_9073: vars=7 stmts=2
#include <stdlib.h>
void test_func(void) {
    int prev37 = 40;
    int sum97 = 3;
    int v64 = 22;
    int cnt77 = 47;
    int b4 = -27;
    int v59 = -47;
    int y76 = 4;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 56; i++) {
        y76 = y76 + sum97;
        cnt77 = b4 + prev37;
        darr[i] = b4;
    }
    free(darr);
}
int main() { test_func(); return 0; }

