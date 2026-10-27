// RTPG_462: vars=4 stmts=8
void test_func(void) {
    int z16 = -40;
    int sum8 = 8;
    int c8 = -1;
    int acc91 = 47013;
    int i;
    for (i = 0; i < 12; i++) {
        int j;
        for (j = 0; j < 12; j++) {
        acc91 = c8 - sum8;
        z16 = c8 - sum8;
        z16 = sum8 - acc91;
        z16 = acc91 - 24;
        sum8 = c8 - c8;
        sum8 = c8 - 29;
        sum8 = sum8 - 1;
        c8 = sum8 - sum8;
        }
    }
}
int main() { test_func(); return 0; }

