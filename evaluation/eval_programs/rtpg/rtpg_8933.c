// RTPG_8933: vars=6 stmts=12
void test_func(void) {
    int acc17 = 63;
    int dat17 = 57526;
    int c33 = 0;
    int z11 = 32139;
    int dat78 = 51617;
    int cnt72 = 38435;
    int h0 = 0;
    int sv0 = 0;
    int h1 = 71;
    int sv1 = 0;
    int h2 = 29693;
    int sv2 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        cnt72 = dat78;
        c33 = z11 | cnt72;
        cnt72 = z11 * 38;
        acc17 = c33 + acc17;
        cnt72 = cnt72 * 10;
        z11 = acc17 + acc17;
        dat17 = acc17 | dat78;
        acc17 = dat78;
        acc17 = acc17 - 1;
        acc17 = acc17 | dat17;
        dat17 = z11 + acc17;
        cnt72 = c33 - 10;
    }
}
int main() { test_func(); return 0; }

