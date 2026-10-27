// RTPG_6573: vars=18 stmts=7
int xn[64];
int yo[64];
#include <stdlib.h>
void test_func(void) {
    int x52 = 43551;
    int v22 = 2;
    int prev17 = -7;
    int c44 = 81;
    int hi72 = -16;
    int hi22 = -2;
    int val39 = 7432;
    int prev73 = 12;
    int b96 = 70;
    int a6 = 10;
    int a44 = 10;
    int a75 = 10;
    int a50 = 46333;
    int val28 = 53;
    int lo48 = -22;
    int cur67 = 62181;
    int z46 = 18676;
    int z3 = -28;
    int *ptr = &c44;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 40;
    int sv0 = 0;
    int h1 = 50;
    int sv1 = 0;
    int h2 = 65071;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        a75 = xn[i];
        lo48 = lo48 - 3;
        a75 = a6;
        hi72 = hi72 + 4;
        prev17 = z46 * 57;
        hi72 = val39;
        z46 = prev17 - z3;
        val28 = val28 * 1090;
        *ptr = *ptr + 4;
        darr[i] = val28;
        if (hi72 <= -34) {
        c44 = z46 + 43;
        }
        yo[i] = z46;
    }
    free(darr);
}
int main() { test_func(); return 0; }

