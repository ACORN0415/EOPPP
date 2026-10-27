// RTPG_9698: vars=10 stmts=2
int xn[32];
int yo[32];
#include <stdlib.h>
void test_func(void) {
    int z2 = 69;
    int res1 = 72;
    int acc4 = 1;
    int sum13 = 55131;
    int tmp8 = 97;
    int sum28 = 59499;
    int val41 = 10;
    int z81 = 3;
    int b22 = 83;
    int c25 = 20;
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
        z2 = xn[i];
        c25 = z81 * 41382;
        acc4 = sum13;
        darr[i] = c25;
        yo[i] = b22;
    }
    free(darr);
}
int main() { test_func(); return 0; }

