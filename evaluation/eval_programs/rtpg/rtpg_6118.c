// RTPG_6118: vars=3 stmts=4
void test_func(void) {
    int hi38 = 23;
    int res63 = 94;
    int dat55 = 16;
    int i;
    for (i = 0; i < 99; i++) {
        dat55 = dat55 - res63;
        dat55 = hi38 + res63;
        hi38 = hi38 + -28;
        dat55 = dat55 - 1;
        if (dat55 <= 76) {
        res63 = res63 + dat55;
        }
    }
}
int main() { test_func(); return 0; }

