// RTPG_5676: vars=3 stmts=7
void test_func(void) {
    int cnt36 = 536;
    int cnt33 = 10;
    int val96 = 54043;
    int i;
    for (i = 0; i < 88; i++) {
        cnt33 = val96 - 22;
        val96 = cnt36 - 10;
        cnt33 = cnt33;
        cnt36 = val96;
        cnt36 = cnt36 - 2;
        val96 = cnt33 - val96;
        cnt33 = cnt33;
    }
}
int main() { test_func(); return 0; }

