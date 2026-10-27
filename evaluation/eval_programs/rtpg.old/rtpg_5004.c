// RTPG_5004: vars=5 stmts=3
enum State { GREEN, FAST, ON };
#include <stdlib.h>
void test_func(void) {
    int val11 = 6158;
    int prev17 = 63850;
    int v98 = 3;
    int b20 = 5865;
    int out16 = 3;
    enum State st = GREEN;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 47; i++) {
        int j;
        for (j = 0; j < 11; j++) {
        out16 = out16 - 38;
        b20 = b20 - 1;
        prev17 = b20 + out16;
        }
    }
done:
    v98 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

