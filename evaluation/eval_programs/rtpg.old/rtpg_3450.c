// RTPG_3450: vars=4 stmts=3
#include <stdlib.h>
void test_func(void) {
    int prev9 = 49215;
    int lo35 = 23431;
    int c54 = 7;
    int acc30 = 36;
    int *ptr = &lo35;
    int *darr = (int *)malloc(32 * sizeof(int));
    int h0 = 12;
    int sv0 = 0;
    int h1 = 45328;
    int sv1 = 0;
    int i;
    for (i = 0; i < 93; i++) {
        switch (lo35) {
            case 0: acc30 = 52; break;
            case 1: lo35 = -6; break;
            case 2: c54 = -33; break;
            case 3: lo35 = 57969; break;
            default: break;
        }
        lo35 = lo35 + 1;
    }
    free(darr);
}
int main() { test_func(); return 0; }

