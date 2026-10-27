// RTPG_4263: vars=4 stmts=4
int idx_arr[64];
#include <stdlib.h>
void test_func(void) {
    int hi28 = 14233;
    int cur26 = 64;
    int sum42 = 7;
    int sum1 = 40240;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 56786;
    int sv0 = 0;
    int h1 = 68;
    int sv1 = 0;
    int i;
    for (i = 0; i < 55; i++) {
        switch (sum42) {
            case 0: sum1 = 31580; break;
            case 1: cur26 = 20949; break;
            case 2: sum1 = 52630; break;
            case 3: sum42 = 6; break;
            default: break;
        }
        sum42 = sum42 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

