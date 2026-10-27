// RTPG_9404: vars=3 stmts=2
void test_func(void) {
    int cnt50 = 6;
    int out57 = -33;
    int lo40 = 63989;
    int i;
    for (i = 0; i < 75; i++) {
        cnt50 = cnt50 - 3;
        lo40 = lo40 - cnt50;
    }
}
int main() { test_func(); return 0; }

