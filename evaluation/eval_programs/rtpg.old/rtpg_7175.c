// RTPG_7175: vars=8 stmts=7
int xn[16];
int yo[16];
enum State { GREEN, BLUE, SLOW };
#include <stdlib.h>
void test_func(void) {
    int z83 = 90;
    int x56 = -48;
    int prev77 = -2;
    int sum27 = 7;
    int x96 = 41;
    int res94 = 25909;
    int val85 = 12;
    int b89 = 27;
    enum State st = GREEN;
    int *darr = (int *)malloc(64 * sizeof(int));
    int h0 = 32;
    int sv0 = 0;
    int h1 = 8366;
    int sv1 = 0;
    int i;
    for (i = 0; i < 65; i++) {
        int j;
        for (j = 0; j < 15; j++) {
        b89 = b89 + 3;
        sum27 = z83 - x96;
        b89 = sum27 - res94;
        b89 = b89 - 4;
        x96 = res94 - prev77;
        prev77 = x56 - sum27;
        b89 = res94 + prev77;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

