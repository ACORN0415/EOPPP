// RTPG_9932: vars=8 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int a31 = -9;
    int sum36 = 12;
    int v5 = 11;
    int cnt22 = 1510;
    int cnt15 = 0;
    int cnt95 = 0;
    int out84 = 25;
    int acc51 = 31;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 81; i++) {
        switch (v5) {
            case 0: a31 = 5; break;
            case 1: cnt95 = 40; break;
            case 2: sum36 = 11116; break;
            case 3: cnt15 = 1; break;
            default: break;
        }
        v5 = v5 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

