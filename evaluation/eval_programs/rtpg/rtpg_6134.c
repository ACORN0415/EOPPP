// RTPG_6134: vars=5 stmts=8
void test_func(void) {
    int hi47 = 0;
    int x34 = 30591;
    int c58 = 42884;
    int acc73 = 23;
    int acc52 = 34;
    int i;
    for (i = 0; i < 36; i++) {
        x34 = hi47;
        acc73 = acc52 - 1;
        x34 = hi47 + 81;
        acc52 = x34 + c58;
        hi47 = hi47 + c58;
        c58 = c58 + 4;
        c58 = acc52 - x34;
        acc73 = x34 - hi47;
    }
}
int main() { test_func(); return 0; }

