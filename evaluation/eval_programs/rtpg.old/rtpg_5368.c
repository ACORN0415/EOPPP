// RTPG_5368: vars=3 stmts=7
void test_func(void) {
    int b57 = 10;
    int cnt26 = 1;
    int dat12 = 86;
    int i;
    for (i = 0; i < 64; i++) {
        cnt26 = b57 - cnt26;
        dat12 = dat12 + 2;
        cnt26 = cnt26 - 1;
        cnt26 = cnt26 - b57;
        cnt26 = cnt26 - 1;
        dat12 = dat12 + b57;
        dat12 = dat12 - b57;
    }
}
int main() { test_func(); return 0; }

