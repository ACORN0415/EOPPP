// RTPG_1722: vars=8 stmts=5
#include <stdlib.h>
void test_func(void) {
    int sum37 = -10;
    int acc97 = 1991;
    int x56 = 50;
    int v95 = 4;
    float acc26 = 81.56;
    int prev29 = 6;
    float dat25 = 22.67;
    int val7 = 49882;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 98; i++) {
        x56 = v95;
        acc26 = prev29 - v95;
        x56 = v95 + 88;
        acc26 = val7 + sum37;
        x56 = x56 + 2;
        darr[i] = x56;
        if (x56 >= 17) {
        sum37 = sum37 + 4;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

