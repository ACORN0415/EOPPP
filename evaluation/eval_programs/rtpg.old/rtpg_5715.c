// RTPG_5715: vars=7 stmts=2
void test_func(void) {
    int cur71 = 2;
    int dat38 = 7;
    float c4 = 36.34;
    int x66 = 0;
    int c75 = 4;
    int hi90 = 9;
    double v14 = 32.09;
    int i;
    for (i = 0; i < 9; i++) {
        switch (cur71) {
            case 0: c75 = -33; break;
            case 1: dat38 = -25; break;
            default: break;
        }
        cur71 = cur71 + 1;
    }
}
int main() { test_func(); return 0; }

