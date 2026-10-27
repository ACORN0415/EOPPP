// RTPG_7455: vars=5 stmts=2
void test_func(void) {
    int c16 = 75;
    int a86 = 10;
    int c39 = 45;
    int c58 = 41;
    int b76 = 38;
    int i;
    for (i = 0; i < 6; i++) {
        c39 = c39 - c58;
        c16 = b76 + c58;
    }
}
int main() { test_func(); return 0; }

