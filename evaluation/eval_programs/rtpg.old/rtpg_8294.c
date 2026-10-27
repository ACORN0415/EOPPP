// RTPG_8294: vars=4 stmts=8
void test_func(void) {
    int b3 = 12;
    int a15 = 0;
    int x92 = 33;
    int dat3 = 8;
    int i;
    for (i = 0; i < 14; i++) {
        b3 = b3 + 4;
        b3 = x92 + x92;
        x92 = x92;
        x92 = b3 - 42736;
        a15 = dat3 - 80;
        b3 = dat3;
        b3 = dat3 + dat3;
        b3 = b3 - 1;
    }
}
int main() { test_func(); return 0; }

