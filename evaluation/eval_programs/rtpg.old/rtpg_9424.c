// RTPG_9424: vars=5 stmts=12
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int out87 = 571;
    int val71 = 18260;
    int z27 = 47;
    int val83 = -7;
    int z93 = 3;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        val71 = xn[i];
        val71 = val71 + 3;
        val71 = val71;
        z27 = z27 + 5;
        z93 = out87 - z27;
        val71 = val71 - 4;
        z93 = val71 + out87;
        out87 = out87 - val83;
        z27 = val83;
        z27 = z27 + 19870;
        val83 = val71 + 65110;
        z93 = z93 + 1;
        val83 = val83 - 5;
        darr[i] = z27;
        if (val83 >= 16) {
        z93 = out87 + z27;
        }
        yo[i] = z27;
    }
    free(darr);
}
int main() { test_func(); return 0; }

