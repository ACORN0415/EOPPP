// RTPG_4602: vars=3 stmts=9
#include <stdlib.h>
void test_func(void) {
    int c17 = 25753;
    int y55 = 45538;
    int prev75 = 29;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 4;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 71; i++) {
        prev75 = prev75 + 4;
        c17 = c17 * 12;
        prev75 = c17;
        prev75 = c17 + y55;
        y55 = y55;
        c17 = c17 * 11;
        c17 = y55 * -43;
        c17 = prev75 + c17;
        y55 = c17 - prev75;
        darr[i] = y55;
    }
    free(darr);
}
int main() { test_func(); return 0; }

