// RTPG_8074: vars=6 stmts=2
void test_func(void) {
    int v30 = 73;
    int a47 = 1;
    int res20 = 95;
    int prev0 = 0;
    int tmp27 = 72;
    int b85 = 59;
    int *ptr = &res20;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 6;
    int sv1 = 0;
    int i;
    for (i = 0; i < 19; i++) {
        tmp27 = v30 & a47;
        prev0 = b85 * 8;
        *ptr = *ptr + 2;
        if (a47 == 56) {
        res20 = v30 - v30;
        }
    }
}
int main() { test_func(); return 0; }

