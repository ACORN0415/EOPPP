// RTPG_3786: vars=7 stmts=8
#include <stdlib.h>
void test_func(void) {
    int v2 = 47351;
    int val86 = 53252;
    int sum45 = 0;
    int cnt48 = 98;
    int v44 = 56;
    int z88 = 27;
    int c83 = 16493;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = -39;
    int sv0 = 0;
    int h1 = 59370;
    int sv1 = 0;
    int i;
    for (i = 0; i < 28; i++) {
        val86 = val86 + 4;
        cnt48 = c83 * 0;
        sum45 = sum45 + 2;
        cnt48 = c83 - v2;
        cnt48 = c83 * 50;
        val86 = v44 + 8;
        val86 = cnt48 - v44;
        val86 = z88 + v2;
        darr[i] = v2;
    }
    free(darr);
}
int main() { test_func(); return 0; }

