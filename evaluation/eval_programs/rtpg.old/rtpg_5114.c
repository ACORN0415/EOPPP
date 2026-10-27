// RTPG_5114: vars=3 stmts=4
void test_func(void) {
    int sum11 = -19;
    int cnt99 = 26;
    int sum74 = 33;
    int i;
    for (i = 0; i < 49; i++) {
        sum11 = sum11;
        sum11 = sum11 - 4;
        cnt99 = sum11 - -47;
        cnt99 = sum74;
    }
}
int main() { test_func(); return 0; }

