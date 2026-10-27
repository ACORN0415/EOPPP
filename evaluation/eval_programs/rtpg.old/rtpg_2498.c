// RTPG_2498: vars=6 stmts=3
struct Pair { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int out80 = 25;
    int acc19 = 50;
    int sum61 = -35;
    int dat6 = 70;
    int a7 = 4;
    int val84 = 64144;
    struct Pair s; s.a = 10; s.b = 64;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 52; i++) {
        int j;
        for (j = 0; j < 9; j++) {
        a7 = out80;
        acc19 = dat6;
        sum61 = sum61 + dat6;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

