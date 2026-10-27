// RTPG_5655: vars=32 stmts=3
int xn[16];
int yo[16];
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int dat81 = 5;
    int b39 = 49;
    int v23 = 3;
    int val68 = 63212;
    int res15 = 28;
    int tmp90 = 0;
    int y59 = 0;
    int tmp52 = -5;
    int dat94 = 98;
    int dat12 = 2;
    int lo24 = 20;
    int x43 = 52871;
    int lo35 = -5;
    int a48 = 33;
    int cur93 = 23;
    int y74 = 47008;
    int a66 = 5;
    int val15 = 47658;
    int cnt29 = 60;
    int hi7 = 57;
    int cnt87 = 0;
    int prev75 = 1;
    int out65 = -34;
    int sum84 = 9;
    int dat55 = 37;
    int x78 = 37;
    int out91 = 23761;
    int tmp69 = 57824;
    int a40 = -46;
    int dat66 = 9049;
    int a98 = 8;
    int z6 = 41;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 6926;
    int sv0 = 0;
    int h1 = 7;
    int sv1 = 0;
    int h2 = 51873;
    int sv2 = 0;
    int i;
    for (i = 0; i < 16; i++) {
        a98 = xn[i];
        dat66 = xn[idx_arr[i]];
        tmp69 = v23 - dat66;
        dat12 = b39 + dat94;
        dat12 = dat12 + 4;
        darr[i] = dat66;
        yo[i] = a40;
    }
    free(darr);
}
int main() { test_func(); return 0; }

