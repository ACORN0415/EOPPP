// RTPG_5348: vars=5 stmts=6
void test_func(void) {
    int a67 = 10;
    int val88 = 0;
    int lo35 = -15;
    int prev12 = 6;
    int dat23 = 11;
    int i;
    for (i = 0; i < 26; i++) {
        prev12 = dat23;
        a67 = dat23 - 33;
        val88 = prev12 - val88;
        val88 = a67 - 7;
        lo35 = a67 + lo35;
        val88 = val88 - 1;
    }
}
int main() { test_func(); return 0; }

