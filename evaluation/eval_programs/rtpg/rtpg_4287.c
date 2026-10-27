// RTPG_4287: vars=6 stmts=8
void test_func(void) {
    int x15 = 7;
    int z35 = 33;
    int acc61 = 92;
    int lo86 = 35;
    int z72 = 0;
    int cnt13 = 27;
    int i;
    for (i = 0; i < 75; i++) {
        x15 = z35;
        z35 = z35;
        z35 = acc61;
        lo86 = lo86 + z72;
        x15 = lo86;
        lo86 = z72 + cnt13;
        z72 = x15 + z72;
        cnt13 = cnt13 - z35;
    }
}
int main() { test_func(); return 0; }

