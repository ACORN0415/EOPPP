// RTPG_2320: vars=7 stmts=11
enum State { SLOW, OFF, ON };
#include <stdlib.h>
void test_func(void) {
    float b67 = 35.42;
    int out32 = 13939;
    int acc41 = 6;
    float res88 = 99.04;
    double prev66 = 7.02;
    int sum17 = 20971;
    int y76 = 27737;
    enum State st = SLOW;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 23063;
    int sv0 = 0;
    int h1 = 89;
    int sv1 = 0;
    int h2 = 2;
    int sv2 = 0;
    int i;
    for (i = 0; i < 84; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        out32 = out32 + 4;
        sum17 = prev66 - 7;
        prev66 = prev66 - 5;
        out32 = out32 + b67;
        acc41 = prev66 - prev66;
        b67 = out32 - 28;
        y76 = y76 + acc41;
        sum17 = sum17;
        out32 = res88 - sum17;
        prev66 = y76 - prev66;
        out32 = y76 + out32;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

