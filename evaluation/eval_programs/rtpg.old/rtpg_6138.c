// RTPG_6138: vars=6 stmts=5
void test_func(void) {
    int acc13 = 6427;
    int out58 = 2;
    int cur10 = 4;
    int res70 = -21;
    int x14 = -14;
    int b88 = 5;
    int i;
    for (i = 0; i < 24; i++) {
        x14 = acc13 - x14;
        b88 = res70 - acc13;
        res70 = x14 + b88;
        out58 = b88;
        x14 = x14 + x14;
    }
}
int main() { test_func(); return 0; }

