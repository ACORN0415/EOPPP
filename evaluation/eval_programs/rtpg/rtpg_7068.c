// RTPG_7068: vars=3 stmts=3
void test_func(void) {
    int lo78 = 37;
    int cnt77 = 49;
    int sum90 = 11041;
    int h0 = 4;
    int sv0 = 0;
    int h1 = 76;
    int sv1 = 0;
    int i;
    for (i = 0; i < 64; i++) {
        sum90 = lo78 * 25;
        sum90 = sum90 + cnt77;
        sum90 = lo78;
        if (lo78 < 75) {
        lo78 = cnt77 - sum90;
        }
    }
}
int main() { test_func(); return 0; }

