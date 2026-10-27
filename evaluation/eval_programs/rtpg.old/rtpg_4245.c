// RTPG_4245: vars=8 stmts=2
#include <stdlib.h>
void test_func(void) {
    int cur37 = 8;
    int z26 = 45;
    int v73 = 10;
    int acc74 = 6572;
    int sum7 = -44;
    int tmp56 = 53;
    float val27 = 56.66;
    double tmp79 = 18.61;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 34; i++) {
        tmp79 = tmp79 - 2;
        tmp56 = v73 + tmp79;
        darr[i] = v73;
    }
    free(darr);
}
int main() { test_func(); return 0; }

