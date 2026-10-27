// RTPG_1487: vars=5 stmts=4
void test_func(void) {
    int out98 = 44724;
    double z74 = 95.77;
    double prev96 = 66.09;
    double dat2 = 40.99;
    int tmp31 = -2;
    int i;
    for (i = 0; i < 64; i++) {
        out98 = prev96 % z74;
        out98 = z74 + 19;
        tmp31 = dat2 + prev96;
        out98 = out98 - 5;
    }
}
int main() { test_func(); return 0; }

