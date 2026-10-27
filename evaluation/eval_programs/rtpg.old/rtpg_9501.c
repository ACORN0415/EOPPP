// RTPG_9501: vars=10 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int z81 = 69;
    int res1 = 72;
    int z2 = 1;
    int sum13 = 55131;
    int sum28 = 97;
    int c25 = 59499;
    int acc4 = 10;
    int b22 = 3;
    int val41 = 83;
    int tmp8 = 20;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 17;
    int sv0 = 0;
    int h1 = -13;
    int sv1 = 0;
    int h2 = 37863;
    int sv2 = 0;
    int h3 = 20910;
    int sv3 = 0;
    int i;
    for (i = 0; i < 32; i++) {
        z81 = xn[i];
        tmp8 = b22 * 41382;
        z2 = sum13;
        darr[i] = tmp8;
        yo[i] = val41;
    }
    free(darr);
}
int main() { test_func(); return 0; }

