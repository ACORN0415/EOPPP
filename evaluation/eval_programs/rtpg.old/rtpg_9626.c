// RTPG_9626: vars=5 stmts=6
void test_func(void) {
    int dat20 = 13;
    int lo53 = 28;
    int c68 = 5;
    double out50 = 8.20;
    double c12 = 6.29;
    int i;
    for (i = 0; i < 65; i++) {
        lo53 = lo53 + 4;
        dat20 = lo53 + c68;
        out50 = c68 - out50;
        lo53 = dat20 & out50;
        lo53 = dat20 / c12;
        c68 = c68 + lo53;
    }
}
int main() { test_func(); return 0; }

