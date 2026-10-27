// RTPG_7938: vars=3 stmts=7
void test_func(void) {
    int val92 = 5;
    int res4 = 19;
    int acc68 = 4;
    int i;
    for (i = 0; i < 22; i++) {
        val92 = val92 - res4;
        res4 = res4 + 3;
        acc68 = acc68 + 4;
        val92 = res4 - 8307;
        res4 = acc68;
        val92 = acc68 + 74;
        res4 = acc68 - acc68;
    }
}
int main() { test_func(); return 0; }

