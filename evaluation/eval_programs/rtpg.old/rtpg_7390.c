// RTPG_7390: vars=5 stmts=2
void test_func(void) {
    int c16 = 75;
    int a86 = 10;
    int c58 = 45;
    int b76 = 41;
    int c39 = 38;
    int i;
    for (i = 0; i < 6; i++) {
        c58 = c58 - b76;
        c16 = c39 + b76;
    }
}
int main() { test_func(); return 0; }

