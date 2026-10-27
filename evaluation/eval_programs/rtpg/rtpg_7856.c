// RTPG_7856: vars=3 stmts=5
void test_func(void) {
    int v75 = 27;
    int cnt92 = 3;
    int val57 = 47;
    int i;
    for (i = 0; i < 56; i++) {
        val57 = val57 + 50098;
        val57 = v75 + val57;
        cnt92 = val57 + v75;
        v75 = val57;
        val57 = v75;
    }
}
int main() { test_func(); return 0; }

