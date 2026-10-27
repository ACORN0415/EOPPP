// RTPG_5430: vars=5 stmts=4
void test_func(void) {
    int dat77 = 62124;
    int x79 = 8;
    int cnt1 = 6;
    int acc66 = -9;
    int val51 = -41;
    int i;
    for (i = 0; i < 59; i++) {
        acc66 = cnt1 + val51;
        val51 = x79 + -24;
        cnt1 = cnt1 - 5;
        val51 = val51 + dat77;
        if (cnt1 > 12) goto done;
    }
done:
    x79 = 0;
}
int main() { test_func(); return 0; }

