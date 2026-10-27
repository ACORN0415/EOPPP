// RTPG_4185: vars=3 stmts=7
int xn[32];
int yo[32];
void test_func(void) {
    int prev70 = 8;
    int val36 = 7;
    int dat55 = 93;
    int i;
    for (i = 0; i < 85; i++) {
        switch (prev70) {
            case 0: dat55 = 22147; break;
            case 1: dat55 = 16; break;
            default: break;
        }
        prev70 = prev70 + 1;
    }
}
int main() { test_func(); return 0; }

