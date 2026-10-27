// RTPG_7402: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int z29 = 3017;
    int y87 = 43;
    int prev24 = 22813;
    int dat87 = 83;
    int val32 = 75;
    int res28 = 10;
    int out74 = -42;
    int cur75 = 3;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 88; i++) {
        switch (prev24) {
            case 0: y87 = 2; break;
            case 1: val32 = 15324; break;
            case 2: prev24 = 7; break;
            case 3: res28 = 3; break;
            default: break;
        }
        prev24 = prev24 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

