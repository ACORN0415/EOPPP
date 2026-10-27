// RTPG_1814: vars=3 stmts=5
void test_func(void) {
    int out11 = 6;
    int prev43 = 55118;
    int tmp54 = 37701;
    int i;
    for (i = 0; i < 60; i++) {
        tmp54 = prev43 + 36055;
        out11 = prev43 + out11;
        prev43 = tmp54 - 89;
        tmp54 = prev43 - 88;
        out11 = tmp54 - 28;
    }
}
int main() { test_func(); return 0; }

