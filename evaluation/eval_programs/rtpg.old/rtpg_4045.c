// RTPG_4045: vars=3 stmts=5
void test_func(void) {
    int cur91 = 16;
    int c23 = 15;
    int tmp58 = 6;
    int i;
    for (i = 0; i < 70; i++) {
        c23 = cur91 + c23;
        cur91 = cur91 - 1;
        cur91 = cur91 + 71;
        cur91 = c23 - 10;
        tmp58 = c23 - tmp58;
    }
}
int main() { test_func(); return 0; }

