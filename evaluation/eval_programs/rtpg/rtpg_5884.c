// RTPG_5884: vars=8 stmts=6
#include <stdlib.h>
void test_func(void) {
    int prev86 = 10900;
    int hi91 = 37;
    int z4 = 7;
    int acc67 = 24;
    int cur75 = -48;
    int lo99 = -23;
    int sum82 = 1;
    int cnt19 = 76;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 94; i++) {
        hi91 = cur75 + prev86;
        hi91 = cnt19;
        cur75 = sum82 + sum82;
        hi91 = sum82 + cnt19;
        acc67 = acc67 + 4;
        hi91 = acc67 - 9;
        darr[i] = prev86;
    }
    free(darr);
}
int main() { test_func(); return 0; }

