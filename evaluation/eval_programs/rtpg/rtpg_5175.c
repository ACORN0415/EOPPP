// RTPG_5175: vars=3 stmts=4
void test_func(void) {
    int sum11 = -19;
    int sum74 = 26;
    int cnt99 = 33;
    int i;
    for (i = 0; i < 49; i++) {
        sum11 = sum11;
        sum11 = sum11 - 4;
        sum74 = sum11 - -47;
        sum74 = cnt99;
    }
}
int main() { test_func(); return 0; }

