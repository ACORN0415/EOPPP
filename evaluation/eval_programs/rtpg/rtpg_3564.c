// RTPG_3564: vars=3 stmts=3
void test_func(void) {
    int b0 = 0;
    int cnt27 = 54606;
    int lo8 = 26;
    int i;
    for (i = 0; i < 65; i++) {
        lo8 = cnt27 % lo8;
        lo8 = b0 + cnt27;
        cnt27 = cnt27 - 4;
    }
}
int main() { test_func(); return 0; }

