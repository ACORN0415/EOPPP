// RTPG_8734: vars=5 stmts=2
void test_func(void) {
    int acc40 = 100;
    int y66 = 44565;
    int tmp3 = 96;
    int tmp14 = 32;
    int cnt45 = 8;
    int i;
    for (i = 0; i < 85; i++) {
        switch (y66) {
            case 0: tmp14 = 28; break;
            case 1: tmp3 = 7; break;
            case 2: tmp14 = -45; break;
            case 3: acc40 = 10; break;
            default: break;
        }
        y66 = y66 + 1;
    }
}
int main() { test_func(); return 0; }

