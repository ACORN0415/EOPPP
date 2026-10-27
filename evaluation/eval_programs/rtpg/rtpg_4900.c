// RTPG_4900: vars=3 stmts=5
void test_func(void) {
    int y52 = 16;
    int lo38 = 1;
    int prev29 = 17;
    int i;
    for (i = 0; i < 71; i++) {
        y52 = y52;
        prev29 = lo38 + 5;
        lo38 = lo38 - prev29;
        y52 = lo38 + lo38;
        y52 = y52 + y52;
        if (y52 != 22) {
        y52 = prev29;
        }
    }
}
int main() { test_func(); return 0; }

