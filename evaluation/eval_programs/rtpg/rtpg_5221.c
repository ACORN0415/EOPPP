// RTPG_5221: vars=4 stmts=3
void test_func(void) {
    int lo48 = 17;
    int val87 = 38;
    int z92 = -42;
    int x62 = 80;
    int i;
    for (i = 0; i < 95; i++) {
        x62 = lo48 + 14;
        val87 = x62;
        x62 = x62 + x62;
    }
}
int main() { test_func(); return 0; }

