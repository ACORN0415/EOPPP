// RTPG_3552: vars=3 stmts=3
void test_func(void) {
    int b0 = 0;
    int lo8 = 54606;
    int cnt27 = 26;
    int i;
    for (i = 0; i < 65; i++) {
        b0 = lo8 ^ cnt27;
        cnt27 = b0 + lo8;
        lo8 = lo8 - 4;
    }
}
int main() { test_func(); return 0; }

