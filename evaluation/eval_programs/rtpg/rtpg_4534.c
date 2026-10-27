// RTPG_4534: vars=3 stmts=8
void test_func(void) {
    int cnt55 = -37;
    int y45 = 30462;
    int a58 = -20;
    int i;
    for (i = 0; i < 36; i++) {
        y45 = y45 - cnt55;
        a58 = a58 - 3;
        y45 = y45 + cnt55;
        cnt55 = cnt55 + 2;
        y45 = a58 - cnt55;
        a58 = a58 - 3;
        a58 = cnt55;
        y45 = y45 - 1;
        if (cnt55 < 20) {
        y45 = y45 - 5;
        }
    }
}
int main() { test_func(); return 0; }

