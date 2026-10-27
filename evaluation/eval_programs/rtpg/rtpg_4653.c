// RTPG_4653: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int prev75 = 25753;
    int y55 = 45538;
    int c17 = 29;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 4;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        c17 = c17 + 4;
        prev75 = prev75 * 12;
        c17 = prev75;
        c17 = prev75 + y55;
        y55 = y55;
        prev75 = prev75 * 11;
        prev75 = y55 * -43;
        prev75 = c17 + prev75;
        y55 = prev75 - c17;
        darr[i] = y55;
    }
    free(darr);
}
int main() { test_func(); return 0; }

