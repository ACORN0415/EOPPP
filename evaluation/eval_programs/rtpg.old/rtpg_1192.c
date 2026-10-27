// RTPG_1192: vars=6 stmts=4
#include <stdlib.h>
void test_func(void) {
    int acc31 = 56;
    int dat33 = 24;
    int dat76 = -27;
    int b61 = 3090;
    int lo29 = 23;
    int z65 = 10;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 0;
    int sv0 = 0;
    int h1 = 0;
    int sv1 = 0;
    int h2 = 59;
    int sv2 = 0;
    int i;
    for (i = 0; i < 73; i++) {
        b61 = lo29 * 9082;
        z65 = b61;
        z65 = z65;
        acc31 = b61 * 10;
        darr[i] = acc31;
        if (b61 == 3) {
        dat76 = b61;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

