// RTPG_3733: vars=4 stmts=3
int xn[16];
int yo[16];
void test_func(void) {
    int dat3 = 13;
    int res21 = 64606;
    int hi78 = -34;
    int cur62 = 31;
    int i;
    for (i = 0; i < 31; i++) {
        switch (dat3) {
            case 0: cur62 = 50661; break;
            case 1: hi78 = 94; break;
            case 2: dat3 = -15; break;
            case 3: res21 = 17130; break;
            default: break;
        }
        dat3 = dat3 + 1;
    }
}
int main() { test_func(); return 0; }

