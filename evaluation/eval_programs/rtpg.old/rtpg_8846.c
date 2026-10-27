// RTPG_8846: vars=4 stmts=4
#include <stdlib.h>
void test_func(void) {
    int b97 = 6;
    int b24 = 13171;
    int a97 = 37;
    int acc81 = -48;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 68; i++) {
        b24 = b24 + 4;
        a97 = b97 - b24;
        a97 = a97;
        b97 = b97 + 3;
        darr[i] = a97;
        if (b24 == -3) {
        a97 = acc81;
        }
    }
done:
    a97 = 0;
    free(darr);
}
int main() { test_func(); return 0; }

