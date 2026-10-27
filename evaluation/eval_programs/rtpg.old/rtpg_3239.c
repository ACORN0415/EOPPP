// RTPG_3239: vars=10 stmts=4
#include <stdlib.h>
void test_func(void) {
    int val96 = 7;
    int dat42 = 13;
    int sum94 = 37075;
    int lo75 = 10;
    int hi7 = 8659;
    int res50 = 28;
    int tmp73 = 95;
    int y83 = 8;
    int sum17 = 55842;
    int tmp12 = 1;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 11069;
    int sv0 = 0;
    int h1 = 15;
    int sv1 = 0;
    int h2 = 8;
    int sv2 = 0;
    int i;
    for (i = 0; i < 52; i++) {
        y83 = lo75 + res50;
        lo75 = lo75 - 3;
        dat42 = val96 - tmp12;
        hi7 = hi7 + 5;
        darr[i] = dat42;
    }
    free(darr);
}
int main() { test_func(); return 0; }

