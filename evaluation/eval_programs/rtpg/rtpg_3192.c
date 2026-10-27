// RTPG_3192: vars=3 stmts=2
void test_func(void) {
    int dat25 = 1;
    int sum58 = 9;
    int cnt71 = 42;
    int i;
    for (i = 0; i < 55; i++) {
        sum58 = dat25 + sum58;
        sum58 = sum58 + dat25;
    }
}
int main() { test_func(); return 0; }

