// RTPG_7198: vars=9 stmts=8
int xn[16];
int yo[16];
#include <stdlib.h>
void test_func(void) {
    int dat0 = 15046;
    int acc55 = 3216;
    int sum67 = 51220;
    int dat21 = 7;
    int lo50 = 5196;
    int z15 = 30108;
    int cnt18 = 57810;
    int z5 = 9;
    int val31 = 37236;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        lo50 = xn[i];
        dat0 = sum67 + lo50;
        lo50 = sum67 - 46;
        dat0 = z15 - 36;
        cnt18 = lo50 - cnt18;
        sum67 = acc55 + 19653;
        sum67 = dat0;
        sum67 = lo50 - cnt18;
        z5 = acc55 + 56961;
        darr[i] = lo50;
        yo[i] = z5;
    }
    free(darr);
}
int main() { test_func(); return 0; }

