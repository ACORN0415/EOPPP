// RTPG_6505: vars=3 stmts=10
void test_func(void) {
    int v20 = 14;
    int dat14 = 2;
    int prev64 = 52;
    int i;
    for (i = 0; i < 6; i++) {
        v20 = v20 ^ dat14;
        v20 = prev64 / v20;
        dat14 = v20 + dat14;
        v20 = v20;
        prev64 = dat14 | v20;
        v20 = v20 - 1;
        v20 = v20 + 9;
        prev64 = v20 - 54;
        v20 = prev64 % v20;
        dat14 = dat14;
    }
}
int main() { test_func(); return 0; }

