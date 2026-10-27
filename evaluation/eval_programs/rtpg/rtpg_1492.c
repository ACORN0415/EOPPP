// RTPG_1492: vars=3 stmts=4
void test_func(void) {
    int v55 = 6205;
    int val39 = 1;
    int cnt1 = -21;
    int i;
    for (i = 0; i < 20; i++) {
        cnt1 = val39;
        val39 = cnt1 - 10;
        val39 = cnt1 - val39;
        cnt1 = v55;
        if (val39 < -46) {
        v55 = v55 + 10;
        }
    }
}
int main() { test_func(); return 0; }

