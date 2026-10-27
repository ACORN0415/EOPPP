// RTPG_3448: vars=3 stmts=10
void test_func(void) {
    int val92 = 3;
    int b69 = -44;
    int a26 = 53584;
    int i;
    for (i = 0; i < 62; i++) {
        val92 = a26 - 9;
        val92 = a26;
        a26 = a26 - 3;
        a26 = val92 - 18;
        val92 = b69 + b69;
        a26 = b69 + val92;
        b69 = b69 + val92;
        b69 = val92;
        b69 = val92 + a26;
        a26 = b69 - a26;
    }
}
int main() { test_func(); return 0; }

