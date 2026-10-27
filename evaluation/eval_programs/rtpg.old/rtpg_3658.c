// RTPG_3658: vars=9 stmts=4
struct Node { int a; int b; };
#include <stdlib.h>
void test_func(void) {
    int hi88 = -44;
    int sum5 = 5;
    int cnt74 = 96;
    int hi86 = 63768;
    int prev89 = 4;
    int sum24 = 65;
    int hi83 = -44;
    int tmp19 = 61038;
    int acc68 = 67;
    struct Node s; s.a = 80; s.b = 32;
    int *ptr = &hi83;
    int *darr = (int *)malloc(32 * sizeof(int));
    int i;
    for (i = 0; i < 90; i++) {
        cnt74 = hi88 - prev89;
        cnt74 = tmp19;
        hi88 = cnt74 - hi86;
        sum5 = hi86 + hi86;
        *ptr = *ptr + 4;
        s.a = s.a + s.b;
        darr[i] = hi88;
        if (sum24 <= -41) {
        prev89 = tmp19 + prev89;
        }
    }
    free(darr);
}
int main() { test_func(); return 0; }

