// RTPG_4719: vars=5 stmts=6
#include <stdlib.h>
void test_func(void) {
    int val6 = 13649;
    int hi51 = -7;
    int sum76 = -37;
    int dat71 = -34;
    int tmp27 = 57371;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 0;
    int sv0 = 0;
    int h1 = -27;
    int sv1 = 0;
    int i;
    for (i = 0; i < 96; i++) {
        val6 = sum76 * 2;
        tmp27 = val6 * 36;
        dat71 = tmp27 + 10;
        sum76 = tmp27;
        sum76 = sum76 * 22;
        val6 = sum76 + 31800;
        darr[i] = val6;
    }
    free(darr);
}
int main() { test_func(); return 0; }

