// RTPG_5170: vars=3 stmts=3
void test_func(void) {
    int y19 = 60229;
    int res66 = 49;
    int val98 = 46928;
    int i;
    for (i = 0; i < 16; i++) {
        y19 = res66 + val98;
        res66 = y19;
        y19 = y19 - res66;
    }
}
int main() { test_func(); return 0; }

