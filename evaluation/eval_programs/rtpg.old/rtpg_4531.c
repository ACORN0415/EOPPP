// RTPG_4531: vars=7 stmts=3
void test_func(void) {
    int acc8 = 20261;
    int tmp88 = 79;
    int b92 = 58054;
    int prev54 = 10;
    int acc57 = 4;
    int tmp56 = 4;
    int b41 = 87;
    int i;
    for (i = 0; i < 28; i++) {
        tmp56 = b41 - tmp56;
        b92 = acc57 - tmp56;
        tmp88 = tmp56 - acc8;
    }
}
int main() { test_func(); return 0; }

