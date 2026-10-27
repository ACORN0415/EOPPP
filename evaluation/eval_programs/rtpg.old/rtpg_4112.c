// RTPG_4112: vars=4 stmts=3
void test_func(void) {
    int sum4 = 5;
    int z28 = 18;
    int acc90 = 82;
    int cnt1 = -15;
    int i;
    for (i = 0; i < 71; i++) {
        cnt1 = cnt1 + 5;
        cnt1 = cnt1 & acc90;
        z28 = acc90 & z28;
    }
}
int main() { test_func(); return 0; }

