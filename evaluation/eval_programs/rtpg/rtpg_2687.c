// RTPG_2687: vars=3 stmts=8
void test_func(void) {
    int z98 = 40;
    int b49 = -26;
    int res39 = 10;
    int i;
    for (i = 0; i < 9; i++) {
        b49 = b49 + z98;
        z98 = z98;
        res39 = b49 - 48;
        b49 = b49 - 3;
        b49 = res39 + z98;
        z98 = res39 - b49;
        b49 = b49 - z98;
        res39 = z98;
        if (b49 >= -41) {
        z98 = z98 + res39;
        }
    }
}
int main() { test_func(); return 0; }

