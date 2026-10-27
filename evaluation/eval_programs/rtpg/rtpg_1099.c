// RTPG_1099: vars=3 stmts=12
void test_func(void) {
    int b88 = 7;
    int sum79 = 64;
    int b26 = 9;
    int i;
    for (i = 0; i < 62; i++) {
        b26 = b88 + sum79;
        sum79 = b88 - b26;
        b26 = sum79 - b88;
        b26 = sum79 - b88;
        b26 = b88 - 6789;
        b26 = b26 - 5;
        sum79 = b26 + 9;
        sum79 = b88;
        b88 = sum79;
        sum79 = sum79;
        b26 = b26 - 2;
        b88 = b26 - b26;
    }
}
int main() { test_func(); return 0; }

