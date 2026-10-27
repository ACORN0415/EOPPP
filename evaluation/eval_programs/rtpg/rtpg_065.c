// RTPG_65: vars=6 stmts=7
#include <stdlib.h>
void test_func(void) {
    int hi46 = 5;
    int c32 = 99;
    int val77 = 44;
    int acc27 = 10;
    int a55 = 1;
    int sum60 = 25288;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 86; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        a55 = a55 - 3;
        sum60 = c32 + a55;
        hi46 = c32 - 33;
        acc27 = acc27 + acc27;
        acc27 = acc27 + 2;
        a55 = sum60;
        c32 = hi46;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

