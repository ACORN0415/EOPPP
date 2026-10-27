// RTPG_2259: vars=7 stmts=5
#include <stdlib.h>
void test_func(void) {
    int sum92 = 2;
    int prev30 = 34;
    int tmp96 = 10;
    int a41 = 35;
    int lo79 = 1;
    int a97 = -35;
    int prev50 = 7;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 41; i++) {
        int j;
        for (j = 0; j < 14; j++) {
        prev50 = prev50;
        prev30 = prev30 + 4;
        a97 = a41 + 5;
        tmp96 = a41;
        sum92 = sum92 - a97;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

