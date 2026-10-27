// RTPG_9714: vars=8 stmts=4
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int acc51 = -9;
    int out84 = 12;
    int cnt15 = 11;
    int v5 = 1510;
    int sum36 = 0;
    int a31 = 0;
    int cnt95 = 25;
    int cnt22 = 31;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 81; i++) {
        switch (cnt15) {
            case 0: acc51 = 5; break;
            case 1: a31 = 40; break;
            case 2: out84 = 11116; break;
            case 3: sum36 = 1; break;
            default: break;
        }
        cnt15 = cnt15 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

