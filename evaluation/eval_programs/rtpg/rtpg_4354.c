// RTPG_4354: vars=8 stmts=7
enum State { BLUE, GREEN, SLOW };
#include <stdlib.h>
void test_func(void) {
    int hi29 = 3;
    int z71 = 20222;
    int prev27 = 3;
    int prev29 = 15;
    int hi6 = 45;
    int acc35 = 10;
    int z26 = 45;
    int hi62 = -1;
    enum State st = BLUE;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 41559;
    int sv0 = 0;
    int h1 = 1;
    int sv1 = 0;
    int i;
    for (i = 0; i < 49; i++) {
        hi62 = hi29 - z26;
        hi29 = hi6 - hi29;
        hi6 = prev29 * -21;
        prev27 = z71 * 8;
        hi62 = z71 - 61114;
        hi6 = z71 + acc35;
        z26 = hi62 - prev27;
        darr[i] = prev29;
        if (hi62 == -37) {
        hi6 = hi29;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

