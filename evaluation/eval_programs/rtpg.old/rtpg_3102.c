// RTPG_3102: vars=3 stmts=5
void test_func(void) {
    int out51 = 3;
    int prev10 = 6;
    int tmp87 = 22109;
    int i;
    for (i = 0; i < 92; i++) {
        tmp87 = prev10 + out51;
        out51 = tmp87 - prev10;
        tmp87 = out51 + tmp87;
        tmp87 = out51 - out51;
        tmp87 = tmp87 + out51;
        if (out51 > -32) {
        tmp87 = out51;
        }
    }
}
int main() { test_func(); return 0; }

