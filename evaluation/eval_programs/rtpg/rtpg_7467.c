// RTPG_7467: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int out74 = 3017;
    int z29 = 43;
    int val32 = 22813;
    int prev24 = 83;
    int res28 = 75;
    int cur75 = 10;
    int y87 = -42;
    int dat87 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 88; i++) {
        switch (val32) {
            case 0: z29 = 2; break;
            case 1: res28 = 15324; break;
            case 2: val32 = 7; break;
            case 3: cur75 = 3; break;
            default: break;
        }
        val32 = val32 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

