// RTPG_3846: vars=5 stmts=3
#include <stdlib.h>
void test_func(void) {
    int prev50 = -6;
    int dat24 = 25337;
    int c91 = 6;
    int prev32 = 7;
    int v24 = 5;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 27433;
    int sv0 = 0;
    int h1 = -44;
    int sv1 = 0;
    int i;
    for (i = 0; i < 61; i++) {
        prev32 = prev50 % dat24;
        c91 = prev50 + dat24;
        prev50 = c91 - v24;
        darr[i] = prev32;
    }
    free(darr);
}
int main() { test_func(); return 0; }

