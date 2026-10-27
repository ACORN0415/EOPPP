// RTPG_5148: vars=25 stmts=6
#include <stdlib.h>
void test_func(void) {
    int cur7 = 15;
    int val11 = 22850;
    int hi61 = 92;
    int acc18 = 0;
    int lo98 = 55;
    int sum40 = 10;
    int val66 = 6;
    int dat33 = -19;
    int cur88 = 15;
    int c23 = 3;
    int y52 = -39;
    int z70 = 1;
    int z39 = 25085;
    int dat44 = 3;
    int z0 = -47;
    int lo62 = 11991;
    int res80 = 10;
    int v90 = 0;
    int hi93 = 34;
    int a64 = 6;
    int a55 = 65420;
    int acc43 = -39;
    int sum38 = 38;
    int v3 = 58;
    int val34 = -19;
    int *ptr = &v3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 6; i++) {
        res80 = sum40 + val11;
        sum38 = sum38 + 2;
        z39 = a55 + 6;
        v3 = hi61 + 1;
        val34 = z70 + a55;
        val11 = c23 - cur7;
        *ptr = *ptr + 3;
        darr[i] = z0;
    }
    free(darr);
}
int main() { test_func(); return 0; }

