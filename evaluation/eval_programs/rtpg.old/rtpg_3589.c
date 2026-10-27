// RTPG_3589: vars=9 stmts=5
int xn[16];
int yo[16];
int idx_arr[16];
#include <stdlib.h>
void test_func(void) {
    int b68 = -19;
    int tmp89 = 73;
    int z83 = 67;
    int z9 = 4;
    int cur81 = 14193;
    int hi24 = 44;
    int b93 = 1;
    int hi34 = 26;
    int prev31 = -38;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 65;
    int sv0 = 0;
    int h1 = 64;
    int sv1 = 0;
    int h2 = 75;
    int sv2 = 0;
    int i;
    for (i = 0; i < 60; i++) {
        int j;
        for (j = 0; j < 18; j++) {
        tmp89 = tmp89 + prev31;
        z9 = prev31 - hi34;
        hi24 = prev31;
        prev31 = prev31 + 1;
        tmp89 = hi34 + b93;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

