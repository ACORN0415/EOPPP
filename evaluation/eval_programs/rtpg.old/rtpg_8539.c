// RTPG_8539: vars=5 stmts=4
enum State { BLUE, ON, RED };
#include <stdlib.h>
void test_func(void) {
    int c68 = 43182;
    int b93 = 50277;
    int cnt17 = 4;
    int sum24 = 8;
    int z97 = 25;
    enum State st = BLUE;
    int *ptr = &cnt17;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 57; i++) {
        cnt17 = c68 - z97;
        sum24 = sum24;
        c68 = z97 + sum24;
        b93 = c68;
        *ptr = *ptr + 1;
        darr[i] = sum24;
    }
    free(darr);
}
int main() { test_func(); return 0; }

