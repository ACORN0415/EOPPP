// RTPG_7441: vars=4 stmts=4
void test_func(void) {
    float cnt91 = 57.93;
    int b28 = 2;
    int val95 = 81;
    int dat3 = 24;
    int i;
    for (i = 0; i < 78; i++) {
        val95 = cnt91 ^ dat3;
        b28 = b28 & b28;
        dat3 = cnt91 & dat3;
        cnt91 = b28;
    }
}
int main() { test_func(); return 0; }

