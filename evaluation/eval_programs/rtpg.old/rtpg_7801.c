// RTPG_7801: vars=3 stmts=2
void test_func(void) {
    int c76 = -32;
    int cnt39 = 52;
    int acc92 = 6;
    int i;
    for (i = 0; i < 55; i++) {
        acc92 = cnt39 % c76;
        cnt39 = acc92;
    }
}
int main() { test_func(); return 0; }

