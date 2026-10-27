// RTPG_5792: vars=6 stmts=3
void test_func(void) {
    int res16 = 1;
    int cnt8 = 8;
    int acc89 = 13;
    int hi40 = -39;
    int hi51 = -36;
    int prev57 = -11;
    int i;
    for (i = 0; i < 15; i++) {
        acc89 = cnt8 - res16;
        hi40 = acc89;
        hi51 = prev57 + 1;
    }
}
int main() { test_func(); return 0; }

