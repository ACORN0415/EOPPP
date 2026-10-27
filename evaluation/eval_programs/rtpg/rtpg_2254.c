// RTPG_2254: vars=4 stmts=4
void test_func(void) {
    int b6 = 50410;
    int cur99 = 15519;
    int acc96 = 26408;
    int res51 = 55;
    int i;
    for (i = 0; i < 12; i++) {
        acc96 = acc96 - 1;
        res51 = b6 - acc96;
        cur99 = cur99 - 2;
        b6 = res51 - 9700;
    }
}
int main() { test_func(); return 0; }

