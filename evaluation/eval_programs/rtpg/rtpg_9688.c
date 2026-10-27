// RTPG_9688: vars=4 stmts=2
void test_func(void) {
    int c45 = 46;
    int prev91 = 53935;
    int lo89 = 33354;
    int val88 = 5;
    int h0 = 72;
    int sv0 = 0;
    int h1 = 8;
    int sv1 = 0;
    int i;
    for (i = 0; i < 29; i++) {
        val88 = prev91 % val88;
        prev91 = val88 | prev91;
    }
}
int main() { test_func(); return 0; }

