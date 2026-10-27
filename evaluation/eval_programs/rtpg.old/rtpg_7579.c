// RTPG_7579: vars=3 stmts=5
void test_func(void) {
    int dat88 = 13;
    int x29 = 1;
    int acc68 = 2;
    int i;
    for (i = 0; i < 72; i++) {
        x29 = acc68 + 14;
        acc68 = acc68;
        x29 = acc68;
        x29 = dat88;
        x29 = x29 + 54718;
    }
}
int main() { test_func(); return 0; }

