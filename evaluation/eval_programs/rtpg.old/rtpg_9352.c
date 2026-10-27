// RTPG_9352: vars=3 stmts=4
void test_func(void) {
    int out2 = 8;
    int prev5 = 42;
    int prev81 = 1;
    int h0 = 1;
    int sv0 = 0;
    int h1 = 62613;
    int sv1 = 0;
    int i;
    for (i = 0; i < 31; i++) {
        prev5 = prev81 + out2;
        prev81 = prev81 + out2;
        prev5 = prev81 * 3;
        out2 = prev81 + prev5;
        if (out2 < 89) {
        out2 = prev5 - prev81;
        }
    }
}
int main() { test_func(); return 0; }

