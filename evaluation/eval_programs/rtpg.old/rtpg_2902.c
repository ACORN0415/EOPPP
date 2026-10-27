// RTPG_2902: vars=5 stmts=10
void test_func(void) {
    int b35 = 22;
    int out78 = 3;
    int dat72 = 89;
    int prev53 = 9177;
    int x7 = 4;
    int i;
    for (i = 0; i < 30; i++) {
        x7 = b35 + dat72;
        dat72 = x7 + x7;
        prev53 = prev53 + out78;
        x7 = x7 - 1;
        dat72 = prev53 + x7;
        out78 = b35 + out78;
        out78 = out78 - 4;
        prev53 = out78 + 62829;
        out78 = dat72 + out78;
        b35 = x7 - dat72;
    }
}
int main() { test_func(); return 0; }

