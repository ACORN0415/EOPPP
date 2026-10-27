// RTPG_2336: vars=3 stmts=6
void test_func(void) {
    int prev82 = 9;
    int a97 = -42;
    int cnt1 = -30;
    int i;
    for (i = 0; i < 88; i++) {
        cnt1 = a97 - prev82;
        a97 = a97 - cnt1;
        a97 = a97;
        prev82 = prev82;
        cnt1 = prev82 - -14;
        a97 = cnt1 + a97;
    }
}
int main() { test_func(); return 0; }

