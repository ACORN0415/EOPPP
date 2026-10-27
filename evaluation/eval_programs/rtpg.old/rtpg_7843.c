// RTPG_7843: vars=3 stmts=7
void test_func(void) {
    int res4 = 5;
    int val92 = 19;
    int acc68 = 4;
    int i;
    for (i = 0; i < 22; i++) {
        res4 = res4 - val92;
        val92 = val92 + 3;
        acc68 = acc68 + 4;
        res4 = val92 - 8307;
        val92 = acc68;
        res4 = acc68 + 74;
        val92 = acc68 - acc68;
    }
}
int main() { test_func(); return 0; }

