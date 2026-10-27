// RTPG_3901: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int tmp89 = 8486;
    int tmp65 = 18161;
    int v58 = 1;
    int hi61 = -43;
    int b8 = 22;
    int x84 = 10;
    int cur5 = 58;
    int z68 = 62;
    int val84 = 1;
    int out19 = 71;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 62737;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int i;
    for (i = 0; i < 41; i++) {
        tmp89 = cur5 + tmp89;
        cur5 = tmp65 * 61;
        val84 = val84 * 46;
        cur5 = tmp89 * 52;
        darr[i] = tmp65;
    }
    free(darr);
}
int main() { test_func(); return 0; }

