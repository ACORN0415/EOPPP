// RTPG_7140: vars=3 stmts=3
void test_func(void) {
    int sum96 = 72;
    int cnt86 = 40;
    int acc93 = 0;
    int i;
    for (i = 0; i < 24; i++) {
        acc93 = sum96 | cnt86;
        sum96 = acc93 - 26;
        cnt86 = acc93 + cnt86;
        if (acc93 >= 27) {
        acc93 = cnt86 - 8;
        }
    }
}
int main() { test_func(); return 0; }

