// RTPG_7764: vars=3 stmts=5
void test_func(void) {
    int val57 = 27;
    int v75 = 3;
    int cnt92 = 47;
    int i;
    for (i = 0; i < 56; i++) {
        cnt92 = cnt92 + 50098;
        cnt92 = val57 + cnt92;
        v75 = cnt92 + val57;
        val57 = cnt92;
        cnt92 = val57;
    }
}
int main() { test_func(); return 0; }

