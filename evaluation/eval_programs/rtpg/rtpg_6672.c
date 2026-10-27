// RTPG_6672: vars=9 stmts=4
#include <stdlib.h>
void test_func(void) {
    int v20 = 17;
    int cnt89 = 4;
    int b34 = 12;
    int c44 = 50205;
    int hi51 = -23;
    int dat8 = 5;
    int out75 = 1;
    int out63 = 6;
    int dat4 = 4;
    int *ptr = &dat4;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 47; i++) {
        int j;
        for (j = 0; j < 17; j++) {
        v20 = b34;
        dat8 = dat8 + 2;
        v20 = out75 + v20;
        dat8 = out75 - c44;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

