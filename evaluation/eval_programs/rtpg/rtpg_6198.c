// RTPG_6198: vars=5 stmts=7
void test_func(void) {
    int out5 = 39;
    int res24 = -37;
    int res16 = 46278;
    int acc47 = -38;
    int acc51 = 5;
    int i;
    for (i = 0; i < 13; i++) {
        out5 = out5 - res16;
        out5 = out5 + 1;
        acc47 = res24 + 63020;
        res24 = acc47 - out5;
        res16 = acc51 + 9;
        res16 = res16 - 2;
        res16 = acc51 - acc51;
    }
}
int main() { test_func(); return 0; }

