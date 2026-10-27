// RTPG_5738: vars=3 stmts=3
void test_func(void) {
    double b0 = 66.17;
    int c56 = 15078;
    int a25 = 59131;
    int i;
    for (i = 0; i < 35; i++) {
        b0 = c56 + b0;
        c56 = c56 - 3;
        b0 = a25 + b0;
        if (a25 <= -3) {
        b0 = c56;
        }
    }
}
int main() { test_func(); return 0; }

