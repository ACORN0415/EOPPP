// RTPG_414: vars=3 stmts=10
void test_func(void) {
    int c10 = 92;
    int res9 = 11;
    int c51 = 6;
    int i;
    for (i = 0; i < 26; i++) {
        c51 = c10 - 99;
        c10 = c51 + c10;
        c51 = c10;
        c51 = c10 - c51;
        c10 = c10 - c10;
        c10 = c51 + c51;
        c10 = c10 + 2;
        res9 = c51 - res9;
        res9 = c51 + c10;
        c10 = res9 + c51;
        if (c51 <= -38) {
        c51 = c51 + 4;
        }
    }
}
int main() { test_func(); return 0; }

