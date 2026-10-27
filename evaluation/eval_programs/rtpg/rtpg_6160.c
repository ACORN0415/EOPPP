// RTPG_6160: vars=3 stmts=5
void test_func(void) {
    int cnt80 = 14;
    int acc24 = -28;
    int a78 = -50;
    int i;
    for (i = 0; i < 86; i++) {
        a78 = a78 + cnt80;
        cnt80 = a78 + 45;
        a78 = cnt80 - acc24;
        a78 = acc24 - a78;
        a78 = acc24 - cnt80;
    }
}
int main() { test_func(); return 0; }

