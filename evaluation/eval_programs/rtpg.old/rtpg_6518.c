// RTPG_6518: vars=10 stmts=6
int xn[16];
int yo[16];
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int v8 = 8;
    int cur40 = 37;
    int val22 = 41304;
    int a97 = 48504;
    int sum75 = 5;
    int hi51 = 2;
    int b20 = 1;
    int y57 = -3;
    int tmp23 = 53628;
    int z15 = 44;
    struct Node s; s.a = 1; s.b = 8;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 16; i++) {
        tmp23 = xn[i];
        z15 = v8 - sum75;
        y57 = hi51 ^ tmp23;
        hi51 = y57;
        sum75 = a97 + 5;
        tmp23 = tmp23 - 3;
        sum75 = tmp23;
        s.a = s.a + s.b;
        darr[i] = z15;
        if (z15 > 29) goto done;
        if (tmp23 < -47) {
        sum75 = tmp23 - cur40;
        }
        yo[i] = z15;
    }
done:
    sum75 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

