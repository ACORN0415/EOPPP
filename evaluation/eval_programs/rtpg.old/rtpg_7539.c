// RTPG_7539: vars=5 stmts=7
void test_func(void) {
    int prev99 = 17;
    int dat62 = 18;
    int tmp88 = 3;
    int cnt66 = 5;
    int lo2 = 7;
    int i;
    for (i = 0; i < 64; i++) {
        prev99 = cnt66;
        dat62 = lo2 - cnt66;
        cnt66 = prev99;
        prev99 = cnt66 - 8496;
        lo2 = dat62 + cnt66;
        tmp88 = cnt66 - 96;
        tmp88 = tmp88 - 10676;
    }
}
int main() { test_func(); return 0; }

