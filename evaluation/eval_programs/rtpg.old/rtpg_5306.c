// RTPG_5306: vars=7 stmts=3
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int b9 = 41;
    int c20 = 8;
    int out20 = 64;
    int dat67 = 10990;
    int dat47 = 33100;
    int z30 = 67;
    int res69 = 7;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 28; i++) {
        switch (dat47) {
            case 0: res69 = 46; break;
            case 1: res69 = 10; break;
            case 2: z30 = 7; break;
            default: break;
        }
        dat47 = dat47 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

