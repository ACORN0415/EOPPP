// RTPG_4074: vars=3 stmts=5
void test_func(void) {
    int cur91 = 16;
    int tmp58 = 15;
    int c23 = 6;
    int i;
    for (i = 0; i < 70; i++) {
        tmp58 = cur91 + tmp58;
        cur91 = cur91 - 1;
        cur91 = cur91 + 71;
        cur91 = tmp58 - 10;
        c23 = tmp58 - c23;
    }
}
int main() { test_func(); return 0; }

