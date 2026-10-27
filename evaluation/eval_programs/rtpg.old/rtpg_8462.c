// RTPG_8462: vars=4 stmts=2
void test_func(void) {
    int acc23 = 4;
    int x42 = 41137;
    int cur91 = 10;
    int out99 = 40;
    int i;
    for (i = 0; i < 32; i++) {
        out99 = acc23 - x42;
        cur91 = cur91 + 1;
        if (cur91 != -20) {
        cur91 = out99;
        }
    }
}
int main() { test_func(); return 0; }

