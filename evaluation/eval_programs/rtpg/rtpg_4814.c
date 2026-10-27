// RTPG_4814: vars=5 stmts=5
void test_func(void) {
    int sum48 = 25;
    int prev10 = 15;
    int hi7 = 30;
    int lo19 = -33;
    int cur37 = 52835;
    int i;
    for (i = 0; i < 86; i++) {
        prev10 = prev10 + 2;
        sum48 = sum48 - 2;
        hi7 = prev10 + 8;
        sum48 = sum48 - 3;
        hi7 = hi7 - 3;
        if (sum48 > 32) goto done;
    }
done:
    sum48 = 0;
}
int main() { test_func(); return 0; }

