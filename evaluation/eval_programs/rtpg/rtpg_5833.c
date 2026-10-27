// RTPG_5833: vars=5 stmts=2
#include <stdlib.h>
void test_func(void) {
    int b12 = 17200;
    double cnt40 = 16.83;
    int x73 = 21;
    int a47 = 9;
    int sum79 = 5;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 10;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 68; i++) {
        cnt40 = cnt40 - 5;
        x73 = sum79 - x73;
        darr[i] = sum79;
        if (sum79 != -10) {
        sum79 = cnt40 + a47;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

