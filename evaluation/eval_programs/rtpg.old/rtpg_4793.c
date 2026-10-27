// RTPG_4793: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int dat41 = 54;
    int tmp61 = 10;
    int prev26 = 40;
    int out53 = 37157;
    int i;
    for (i = 0; i < 12; i++) {
        switch (tmp61) {
            case 0: dat41 = 6; break;
            case 1: prev26 = 9; break;
            case 2: dat41 = 98; break;
            case 3: out53 = 4; break;
            default: break;
        }
        tmp61 = tmp61 + 1;
    }
}
int main() { test_func(); return 0; }

