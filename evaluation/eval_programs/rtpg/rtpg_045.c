// RTPG_45: vars=3 stmts=5
void test_func(void) {
    int hi71 = 79;
    int c64 = 6;
    int y50 = 44730;
    int i;
    for (i = 0; i < 63; i++) {
        c64 = c64 | y50;
        y50 = hi71 % c64;
        hi71 = c64 + c64;
        c64 = y50 / c64;
        c64 = c64 - 3;
    }
}
int main() { test_func(); return 0; }

