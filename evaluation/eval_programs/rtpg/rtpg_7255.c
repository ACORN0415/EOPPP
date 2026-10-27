// RTPG_7255: vars=7 stmts=5
void test_func(void) {
    int x79 = 36267;
    int cnt92 = 4;
    int prev7 = 58450;
    int acc29 = -19;
    int acc43 = -9;
    int a1 = 10;
    int out70 = 86;
    int i;
    for (i = 0; i < 74; i++) {
        prev7 = acc29 - x79;
        out70 = a1 - x79;
        out70 = acc43 - x79;
        x79 = acc43 + cnt92;
        acc43 = prev7 - out70;
    }
}
int main() { test_func(); return 0; }

