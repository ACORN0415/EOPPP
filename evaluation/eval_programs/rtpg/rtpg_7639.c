// RTPG_7639: vars=4 stmts=2
void test_func(void) {
    int hi72 = 25640;
    int a44 = 46676;
    int val53 = 16;
    int out57 = 44;
    int i;
    for (i = 0; i < 100; i++) {
        out57 = out57 + 5;
        val53 = val53 - 4;
    }
}
int main() { test_func(); return 0; }

