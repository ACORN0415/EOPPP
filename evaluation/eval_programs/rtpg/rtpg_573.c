// RTPG_573: vars=3 stmts=5
void test_func(void) {
    int a27 = -29;
    int res19 = 44;
    int acc83 = 50;
    int i;
    for (i = 0; i < 96; i++) {
        a27 = acc83 - acc83;
        acc83 = res19 + 36;
        acc83 = acc83 - 1;
        res19 = res19 - 5;
        res19 = acc83 - acc83;
    }
}
int main() { test_func(); return 0; }

