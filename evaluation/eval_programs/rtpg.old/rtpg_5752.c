// RTPG_5752: vars=3 stmts=7
void test_func(void) {
    int prev64 = 8;
    int a87 = 26275;
    int hi74 = 0;
    int i;
    for (i = 0; i < 6; i++) {
        hi74 = hi74 - 2;
        a87 = a87 - 5;
        hi74 = a87 - 68;
        hi74 = hi74 - a87;
        a87 = hi74 + a87;
        hi74 = a87 + prev64;
        prev64 = prev64 - a87;
    }
}
int main() { test_func(); return 0; }

