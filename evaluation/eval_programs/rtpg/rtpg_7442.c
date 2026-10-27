// RTPG_7442: vars=6 stmts=11
int xn[16];
int yo[16];
void test_func(void) {
    int x57 = 32798;
    int dat95 = 9;
    int y60 = 100;
    int acc18 = 5;
    int acc93 = 11;
    int cur50 = 9;
    int i;
    for (i = 0; i < 59; i++) {
        switch (acc18) {
            case 0: dat95 = 0; break;
            case 1: x57 = 74; break;
            case 2: acc18 = 8; break;
            case 3: x57 = 18; break;
            default: break;
        }
        acc18 = acc18 + 1;
    }
}
int main() { test_func(); return 0; }

