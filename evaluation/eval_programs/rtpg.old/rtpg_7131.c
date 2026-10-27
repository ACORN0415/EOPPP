// RTPG_7131: vars=3 stmts=6
void test_func(void) {
    int b94 = 2;
    int cnt23 = 43;
    int cnt60 = 49;
    int i;
    for (i = 0; i < 61; i++) {
        b94 = cnt60 + cnt23;
        b94 = cnt60 + b94;
        cnt23 = cnt23 + 4;
        cnt60 = b94;
        cnt23 = cnt60 - cnt23;
        cnt23 = cnt23;
    }
}
int main() { test_func(); return 0; }

