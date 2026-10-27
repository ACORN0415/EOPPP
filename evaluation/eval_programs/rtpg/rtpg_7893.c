// RTPG_7893: vars=3 stmts=2
void test_func(void) {
    int cnt39 = -32;
    int acc92 = 52;
    int c76 = 6;
    int i;
    for (i = 0; i < 55; i++) {
        c76 = acc92 % cnt39;
        acc92 = c76;
    }
}
int main() { test_func(); return 0; }

