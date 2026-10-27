// RTPG_7738: vars=8 stmts=4
void test_func(void) {
    int lo76 = 41116;
    int c61 = 7;
    int prev84 = 23;
    int res78 = 83;
    int z6 = 9;
    int v74 = 2;
    int prev60 = 0;
    int acc10 = 90;
    int i;
    for (i = 0; i < 83; i++) {
        prev60 = prev60 - 4;
        prev60 = acc10 - prev60;
        acc10 = prev84 - z6;
        v74 = lo76 ^ z6;
    }
}
int main() { test_func(); return 0; }

