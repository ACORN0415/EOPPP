// RTPG_1086: vars=9 stmts=3
#include <stdlib.h>
void test_func(void) {
    double hi31 = 20.40;
    int c14 = 23;
    int prev94 = 65;
    int tmp48 = 12434;
    double x97 = 24.83;
    int hi74 = 7518;
    double dat16 = 6.90;
    int x6 = 37110;
    double cnt95 = 86.42;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 38; i++) {
        switch (x6) {
            case 0: x6 = 13; break;
            case 1: x97 = 5; break;
            case 2: tmp48 = 75; break;
            case 3: prev94 = 46804; break;
            default: break;
        }
        x6 = x6 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

