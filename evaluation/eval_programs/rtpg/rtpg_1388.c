// RTPG_1388: vars=4 stmts=11
void test_func(void) {
    int prev9 = 40117;
    int val78 = 67;
    int c49 = 24;
    int sum10 = 10;
    int h0 = 48;
    int sv0 = 0;
    int h1 = 2;
    int sv1 = 0;
    int i;
    for (i = 0; i < 80; i++) {
        sum10 = prev9 * 56;
        sum10 = sum10 + 5;
        val78 = prev9;
        c49 = sum10 & prev9;
        val78 = c49 / val78;
        sum10 = prev9 * 3;
        sum10 = prev9 - c49;
        c49 = val78 - prev9;
        val78 = c49 + val78;
        val78 = val78 - sum10;
        sum10 = prev9 / c49;
        if (c49 != 84) {
        c49 = val78 - 4;
        }
    }
}
int main() { test_func(); return 0; }

