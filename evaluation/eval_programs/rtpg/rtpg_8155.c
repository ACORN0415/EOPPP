// RTPG_8155: vars=9 stmts=7
void test_func(void) {
    int acc16 = 3;
    int dat67 = 18457;
    int y6 = 10;
    int x43 = -15;
    int acc76 = 5;
    int c88 = 60154;
    int hi56 = 24;
    int prev36 = -32;
    int z50 = -4;
    int i;
    for (i = 0; i < 58; i++) {
        int j;
        for (j = 0; j < 16; j++) {
        x43 = prev36 + c88;
        dat67 = dat67 - 4;
        acc16 = hi56;
        z50 = hi56 - z50;
        x43 = prev36 + 3;
        prev36 = x43 + z50;
        acc76 = prev36 + 28239;
        }
    }
}
int main() { test_func(); return 0; }

