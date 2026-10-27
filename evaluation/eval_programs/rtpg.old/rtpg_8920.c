// RTPG_8920: vars=5 stmts=9
#include <stdlib.h>
void test_func(void) {
    int cnt51 = 0;
    int b53 = 31106;
    int z27 = 8;
    int v40 = 10;
    int b34 = 45976;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 44; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        cnt51 = v40;
        cnt51 = cnt51 - 1;
        b34 = b34 + 3;
        b53 = b53 + z27;
        b53 = v40 + z27;
        v40 = cnt51 + -38;
        cnt51 = cnt51;
        cnt51 = z27 + 1;
        z27 = z27 + 1;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

