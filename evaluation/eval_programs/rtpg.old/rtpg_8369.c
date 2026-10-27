// RTPG_8369: vars=21 stmts=4
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int val92 = 5;
    int val99 = 25197;
    int sum35 = 2;
    int res14 = 48;
    int sum86 = 51;
    int sum16 = 17;
    int prev19 = 14225;
    int acc77 = -44;
    int hi5 = 0;
    int val25 = 37793;
    int c5 = 83;
    int z0 = 4;
    int v37 = 1;
    int acc70 = 10;
    int acc23 = 89;
    int hi25 = 89;
    int cur17 = 94;
    int sum45 = 3;
    int z28 = 6;
    int dat60 = 8;
    int dat79 = 9;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 32; i++) {
        c5 = xn[i];
        hi5 = dat60 - acc77;
        sum35 = val99 + prev19;
        z28 = hi25 + 5;
        acc23 = val92 - dat79;
        darr[i] = z0;
        yo[i] = v37;
    }
    free(darr);
}
int main() { test_func(); return 0; }

