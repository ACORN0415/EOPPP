// RTPG_6243: vars=6 stmts=5
void test_func(void) {
    int b88 = 6427;
    int x14 = 2;
    int res70 = 4;
    int cur10 = -21;
    int out58 = -14;
    int acc13 = 5;
    int i;
    for (i = 0; i < 24; i++) {
        out58 = b88 - out58;
        acc13 = cur10 - b88;
        cur10 = out58 + acc13;
        x14 = acc13;
        out58 = out58 + out58;
    }
}
int main() { test_func(); return 0; }

