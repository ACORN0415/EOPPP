// RTPG_4588: vars=7 stmts=3
void test_func(void) {
    int acc57 = 20261;
    int b92 = 79;
    int b41 = 58054;
    int prev54 = 10;
    int tmp56 = 4;
    int tmp88 = 4;
    int acc8 = 87;
    int i;
    for (i = 0; i < 28; i++) {
        tmp88 = acc8 - tmp88;
        b41 = tmp56 - tmp88;
        b92 = tmp88 - acc57;
    }
}
int main() { test_func(); return 0; }

