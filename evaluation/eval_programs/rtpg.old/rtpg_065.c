// RTPG_65: vars=10 stmts=11
#include <stdlib.h>
void test_func(void) {
    int cur1 = 48;
    int z67 = 6;
    int hi25 = 34;
    int val28 = 56;
    int cnt15 = 3;
    int c51 = 2;
    int res19 = 26;
    int hi0 = 3;
    int a55 = 52413;
    int b98 = -36;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 55; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        a55 = val28 + c51;
        res19 = res19 + 4;
        hi0 = cnt15;
        hi0 = res19 + b98;
        hi25 = hi25 + 2;
        cnt15 = cnt15 + res19;
        val28 = z67 + a55;
        val28 = val28 + 2;
        z67 = res19 + 4;
        b98 = z67 + 2;
        val28 = res19;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

