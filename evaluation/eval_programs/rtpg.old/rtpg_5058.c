// RTPG_5058: vars=4 stmts=5
int xn[64];
int yo[64];
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int dat55 = 91;
    int cur54 = 41175;
    int tmp69 = 46;
    int val46 = 1;
    struct Node s; s.a = 49; s.b = 56;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 38; i++) {
        int j;
        for (j = 0; j < 7; j++) {
        dat55 = val46;
        tmp69 = tmp69;
        tmp69 = tmp69 - 4;
        dat55 = dat55 - 5;
        tmp69 = tmp69 + cur54;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

