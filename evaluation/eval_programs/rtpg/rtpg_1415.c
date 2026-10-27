// RTPG_1415: vars=3 stmts=3
void test_func(void) {
    int y91 = 4;
    int y48 = 9;
    int acc49 = 7;
    int i;
    for (i = 0; i < 31; i++) {
        acc49 = y48 - acc49;
        y91 = y91 - 3;
        y91 = y91 + 7;
        if (y48 != 90) {
        y91 = acc49 - y91;
        }
    }
}
int main() { test_func(); return 0; }

