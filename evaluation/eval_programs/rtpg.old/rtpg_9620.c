// RTPG_9620: vars=5 stmts=7
void test_func(void) {
    int z91 = -43;
    int val6 = -44;
    int a64 = 24;
    int a86 = 58412;
    int lo11 = 42445;
    int i;
    for (i = 0; i < 12; i++) {
        a64 = val6 + 1;
        z91 = z91;
        z91 = a86 - z91;
        a86 = val6 - 9;
        val6 = val6 - 0;
        val6 = val6 + 3;
        lo11 = z91 + a86;
    }
}
int main() { test_func(); return 0; }

