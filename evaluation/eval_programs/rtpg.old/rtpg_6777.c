// RTPG_6777: vars=5 stmts=5
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int cnt59 = 0;
    int y71 = 88;
    int tmp85 = 5;
    int v32 = 32511;
    int y10 = 8;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        cnt59 = xn[i];
        y71 = cnt59;
        tmp85 = y71 + tmp85;
        tmp85 = tmp85 - tmp85;
        v32 = y71;
        cnt59 = tmp85 - 60980;
        darr[i] = v32;
        yo[i] = v32;
    }
    free(darr);
}
int main() { test_func(); return 0; }

