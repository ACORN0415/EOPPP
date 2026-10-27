// RTPG_2293: vars=4 stmts=3
int xn[64];
int yo[64];
void test_func(void) {
    int b70 = -15;
    int y0 = 8;
    int cnt72 = 28905;
    int out40 = 1;
    int i;
    for (i = 0; i < 88; i++) {
        switch (out40) {
            case 0: y0 = 9; break;
            case 1: y0 = 24; break;
            case 2: out40 = 3797; break;
            case 3: out40 = -25; break;
            default: break;
        }
        out40 = out40 + 1;
    }
}
int main() { test_func(); return 0; }

