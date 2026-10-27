// RTPG_3594: vars=6 stmts=3
int xn[32];
int yo[32];
void test_func(void) {
    int res74 = 4;
    int sum66 = 15;
    int x63 = 8;
    int cnt12 = 8;
    int dat88 = 30;
    int val36 = 19;
    int i;
    for (i = 0; i < 22; i++) {
        switch (cnt12) {
            case 0: sum66 = -2; break;
            case 1: cnt12 = 41; break;
            case 2: val36 = 6; break;
            case 3: dat88 = -28; break;
            default: break;
        }
        cnt12 = cnt12 + 1;
    }
}
int main() { test_func(); return 0; }

