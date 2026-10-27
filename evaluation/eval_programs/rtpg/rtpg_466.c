// RTPG_466: vars=9 stmts=12
#include <stdlib.h>
void test_func(void) {
    int v59 = 88;
    int z30 = 30;
    int b34 = -45;
    int y29 = -46;
    int hi83 = -16;
    int out39 = 0;
    int y49 = 8;
    int c82 = 24694;
    int out2 = 97;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 48; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        z30 = out2 + b34;
        b34 = z30;
        y29 = out39 + -47;
        y29 = z30 + 82;
        out2 = hi83 + c82;
        y29 = v59;
        b34 = z30 - 9;
        z30 = z30 - 2;
        b34 = v59 - c82;
        out2 = b34;
        out2 = hi83 + out39;
        z30 = z30 - 1;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

