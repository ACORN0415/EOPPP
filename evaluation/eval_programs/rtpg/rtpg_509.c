// RTPG_509: vars=6 stmts=11
void test_func(void) {
    double lo14 = 50.69;
    double out24 = 15.34;
    int cnt14 = 41161;
    int z24 = -23;
    float prev71 = 93.50;
    int acc67 = 44315;
    int i;
    for (i = 0; i < 77; i++) {
        prev71 = lo14 - cnt14;
        cnt14 = lo14 - z24;
        prev71 = prev71 - 5;
        prev71 = out24;
        lo14 = out24;
        out24 = acc67 + prev71;
        lo14 = acc67 - cnt14;
        z24 = cnt14;
        lo14 = cnt14 + out24;
        out24 = lo14 - prev71;
        acc67 = cnt14 + out24;
    }
}
int main() { test_func(); return 0; }

