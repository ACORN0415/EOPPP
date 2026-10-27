// RTPG_4861: vars=4 stmts=8
int xn[64];
int yo[64];
void test_func(void) {
    int out53 = 54;
    int dat41 = 10;
    int prev26 = 40;
    int tmp61 = 37157;
    int i;
    for (i = 0; i < 12; i++) {
        switch (dat41) {
            case 0: out53 = 6; break;
            case 1: prev26 = 9; break;
            case 2: out53 = 98; break;
            case 3: tmp61 = 4; break;
            default: break;
        }
        dat41 = dat41 + 1;
    }
}
int main() { test_func(); return 0; }

