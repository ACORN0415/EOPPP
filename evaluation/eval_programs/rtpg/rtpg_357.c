// RTPG_357: vars=3 stmts=6
void test_func(void) {
    int sum93 = 6;
    int cnt43 = 7;
    int out69 = 15403;
    int i;
    for (i = 0; i < 29; i++) {
        cnt43 = out69;
        cnt43 = cnt43 + 2;
        out69 = out69 + 3;
        sum93 = out69 + cnt43;
        out69 = out69 / sum93;
        cnt43 = out69 + sum93;
    }
}
int main() { test_func(); return 0; }

