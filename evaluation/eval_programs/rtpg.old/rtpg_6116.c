// RTPG_6116: vars=10 stmts=5
#include <stdlib.h>
void test_func(void) {
    int a71 = 10;
    int y96 = -35;
    int x25 = 100;
    int acc58 = 12426;
    int cnt9 = 3;
    int acc75 = 26392;
    int hi0 = -45;
    int prev62 = -12;
    int val85 = 29;
    int tmp95 = 88;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 73; i++) {
        val85 = val85 + 4;
        prev62 = prev62 - val85;
        cnt9 = x25 - 46036;
        cnt9 = acc75 - prev62;
        x25 = tmp95 + x25;
        darr[i] = a71;
    }
    free(darr);
}
int main() { test_func(); return 0; }

