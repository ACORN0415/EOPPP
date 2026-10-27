// RTPG_7718: vars=5 stmts=8
void test_func(void) {
    int b24 = 5;
    double res38 = 11.37;
    int lo68 = 38915;
    double val26 = 96.78;
    int x93 = 0;
    int i;
    for (i = 0; i < 53; i++) {
        b24 = res38;
        res38 = lo68 + x93;
        x93 = x93 + 1;
        b24 = res38 - x93;
        res38 = res38 + x93;
        lo68 = b24;
        val26 = b24 + val26;
        val26 = x93;
    }
}
int main() { test_func(); return 0; }

