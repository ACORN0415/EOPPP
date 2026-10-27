// RTPG_9223: vars=3 stmts=5
#include <stdlib.h>
void test_func(void) {
    int a98 = 54662;
    int cur90 = 3;
    int res48 = 35965;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 8;
    int sv0 = 0;
    int h1 = 59244;
    int sv1 = 0;
    int i;
    for (i = 0; i < 26; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        cur90 = cur90 - 5;
        cur90 = a98 - res48;
        res48 = cur90 + a98;
        a98 = a98 + res48;
        res48 = res48 + 4;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

