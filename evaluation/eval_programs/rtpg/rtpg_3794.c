// RTPG_3794: vars=3 stmts=3
void test_func(void) {
    int tmp16 = 35;
    int c88 = 6871;
    int out40 = 58912;
    int i;
    for (i = 0; i < 67; i++) {
        c88 = tmp16 - c88;
        tmp16 = out40;
        out40 = out40 - c88;
    }
}
int main() { test_func(); return 0; }

