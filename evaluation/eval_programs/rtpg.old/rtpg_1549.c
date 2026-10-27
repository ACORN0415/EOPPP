// RTPG_1549: vars=4 stmts=4
void test_func(void) {
    int v89 = 28;
    int b26 = 62;
    int a45 = 45;
    int c38 = 22980;
    int i;
    for (i = 0; i < 92; i++) {
        v89 = c38;
        b26 = c38 + 16182;
        a45 = v89 + b26;
        v89 = a45;
    }
}
int main() { test_func(); return 0; }

