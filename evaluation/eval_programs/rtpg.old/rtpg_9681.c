// RTPG_9681: vars=4 stmts=3
void test_func(void) {
    int cnt27 = 10;
    int x70 = 7;
    int v60 = 35168;
    int dat62 = 42;
    int i;
    for (i = 0; i < 49; i++) {
        cnt27 = cnt27 - v60;
        dat62 = x70 + cnt27;
        v60 = dat62 - cnt27;
    }
}
int main() { test_func(); return 0; }

