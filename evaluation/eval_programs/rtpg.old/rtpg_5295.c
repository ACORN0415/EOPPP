// RTPG_5295: vars=5 stmts=4
void test_func(void) {
    int v8 = 0;
    int z36 = 50577;
    int cnt83 = 10861;
    int b14 = 40588;
    int z53 = 2501;
    int i;
    for (i = 0; i < 72; i++) {
        z53 = z53 ^ z53;
        z36 = z36 - 1;
        cnt83 = v8 | z36;
        z36 = z36 / v8;
    }
}
int main() { test_func(); return 0; }

