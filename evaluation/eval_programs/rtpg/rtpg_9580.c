// RTPG_9580: vars=8 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int tmp12 = 38;
    int out19 = 9;
    int cur10 = -28;
    int out9 = -18;
    int c87 = 12;
    int hi86 = -14;
    int lo93 = 7;
    int out61 = 26;
    int i;
    for (i = 0; i < 25; i++) {
        switch (out61) {
            case 0: c87 = -49; break;
            case 1: out19 = 6; break;
            case 2: out61 = -23; break;
            case 3: out19 = 23589; break;
            default: break;
        }
        out61 = out61 + 1;
    }
}
int main() { test_func(); return 0; }

