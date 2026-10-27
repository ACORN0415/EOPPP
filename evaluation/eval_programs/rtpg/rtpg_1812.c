// RTPG_1812: vars=3 stmts=6
void test_func(void) {
    int prev9 = 19686;
    int lo59 = 58943;
    int cur91 = 1;
    int i;
    for (i = 0; i < 36; i++) {
        lo59 = prev9 - cur91;
        cur91 = cur91 - 2;
        lo59 = lo59 + 4;
        cur91 = cur91 + 3;
        lo59 = prev9;
        lo59 = cur91;
        if (lo59 == -15) {
        prev9 = prev9 - 4;
        }
    }
}
int main() { test_func(); return 0; }

