// RTPG_2299: vars=4 stmts=6
void test_func(void) {
    int cnt85 = 15;
    int x8 = -14;
    int cur54 = -20;
    int lo40 = 3;
    int i;
    for (i = 0; i < 60; i++) {
        lo40 = lo40 - 5;
        cur54 = lo40;
        x8 = cur54 - 10;
        cur54 = x8 - cnt85;
        x8 = lo40 - cnt85;
        cnt85 = x8 - cur54;
    }
}
int main() { test_func(); return 0; }

