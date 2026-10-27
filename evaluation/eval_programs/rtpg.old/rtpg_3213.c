// RTPG_3213: vars=5 stmts=5
void test_func(void) {
    int b67 = 81;
    int v72 = -30;
    int a17 = -48;
    int a29 = 53110;
    int v89 = 49;
    int i;
    for (i = 0; i < 89; i++) {
        v89 = a17 - v89;
        a17 = v72;
        b67 = a29 + 61;
        v89 = v89 + 3;
        b67 = a29 + v72;
    }
}
int main() { test_func(); return 0; }

