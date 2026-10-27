// RTPG_5891: vars=6 stmts=3
void test_func(void) {
    int acc89 = 1;
    int hi40 = 8;
    int hi51 = 13;
    int cnt8 = -39;
    int prev57 = -36;
    int res16 = -11;
    int i;
    for (i = 0; i < 15; i++) {
        hi51 = hi40 - acc89;
        cnt8 = hi51;
        prev57 = res16 + 1;
    }
}
int main() { test_func(); return 0; }

