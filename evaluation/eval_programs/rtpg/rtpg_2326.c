// RTPG_2326: vars=10 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
enum State { SLOW, FAST, OFF };
#include <stdlib.h>
void test_func(void) {
    int v16 = 3;
    int b78 = 0;
    int sum41 = 1;
    int prev70 = 57569;
    int acc12 = 8;
    int val58 = 29;
    int prev2 = 66;
    int out35 = 10;
    int a21 = 11;
    int out2 = 35;
    enum State st = SLOW;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 23; i++) {
        switch (v16) {
            case 0: a21 = 2; break;
            case 1: v16 = 48; break;
            case 2: v16 = 7; break;
            default: break;
        }
        v16 = v16 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

