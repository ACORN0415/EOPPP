// RTPG_147: vars=5 stmts=2
#include <stdlib.h>
void test_func(void) {
    int dat20 = 69;
    int x73 = -16;
    int tmp3 = 46;
    int lo98 = 41;
    int cnt15 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 57884;
    int sv0 = 0;
    int h1 = 82;
    int sv1 = 0;
    int i;
    for (i = 0; i < 66; i++) {
        x73 = tmp3;
        x73 = cnt15 + tmp3;
        darr[i] = tmp3;
    }
    free(darr);
}
int main() { test_func(); return 0; }

