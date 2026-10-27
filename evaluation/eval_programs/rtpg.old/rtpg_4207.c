// RTPG_4207: vars=4 stmts=2
void test_func(void) {
    int c92 = 20;
    int acc45 = 10;
    int val78 = 11;
    int sum85 = -24;
    int i;
    for (i = 0; i < 28; i++) {
        c92 = val78 & acc45;
        sum85 = sum85 - acc45;
    }
}
int main() { test_func(); return 0; }

