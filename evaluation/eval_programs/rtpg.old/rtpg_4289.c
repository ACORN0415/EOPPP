// RTPG_4289: vars=7 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int y81 = 4;
    int b42 = 26;
    int v96 = 40249;
    int val23 = 41;
    int val64 = 82;
    int tmp73 = 19;
    int z72 = -14;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        val64 = xn[i];
        val23 = b42 - val23;
        z72 = z72 - 2;
        y81 = val64 - b42;
        val64 = tmp73 + 10;
        darr[i] = b42;
        if (val64 >= -28) {
        val23 = v96;
        }
        yo[i] = tmp73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

