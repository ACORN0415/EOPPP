// RTPG_6889: vars=3 stmts=7
#include <stdlib.h>
void test_func(void) {
    int c54 = 22;
    int hi91 = -1;
    int b14 = 4;
    int *darr = (int *)malloc(64 * sizeof(int));
    int i;
    for (i = 0; i < 13; i++) {
        c54 = hi91 % b14;
        hi91 = c54;
        hi91 = hi91 - 1;
        c54 = c54 + c54;
        c54 = c54;
        c54 = c54 + 1;
        b14 = hi91;
        darr[i] = hi91;
        if (b14 != -1) {
        b14 = b14;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

